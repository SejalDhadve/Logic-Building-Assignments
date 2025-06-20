//Write application which accepts file name from user and one string from user Write that string at the end of file.
//input : Demo.txt
//        Hello World
//output : Write Hello World at the end of Demo.txt file.

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

    getchar();

    printf("Enter the string to write at the end of the file:\n");
    scanf(" %[^\n]", Buffer);

    fd = open(Fname,O_WRONLY | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open File\n");
    }
    else
    {
        iRet = write(fd,Buffer,strlen(Buffer));
    }

    return 0;
}