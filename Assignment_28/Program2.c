//Write application which accepts file name from user and create that file.
//input : Demo.txt
//output : File created successfully

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};

    printf("Enter the File name that you want to create:\n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);

    if(fd == -1)
    {
        printf("Unable to create File\n");
    }
    else
    {
        printf("File created succesfully with fd:%d\n",fd);
    }

    return 0;
}