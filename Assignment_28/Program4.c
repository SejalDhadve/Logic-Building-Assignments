//Write application which accepts file name from user and display size of file.
//input : Demo.txt
//output : File size is 56 bytes  

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0;

    printf("Enter the File name that you want to open:\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open File\n");
    }
    else
    {
        iRet = read(fd,Buffer,BUFFER_SIZE);
        
        printf("File size is %d bytes",iRet);
    }

    return 0;
}