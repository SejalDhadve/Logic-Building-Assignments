//Write application which accepts file name from user and open that file in read mode.
//input : Demo.txt
//output : File opened successfully

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};

    printf("Enter the File name that you want to open:\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open File\n");
    }
    else
    {
        printf("File opened successfully with fd:%d\n",fd);
    }

    return 0;
}