//Write a program which accepts file name from user and one count from user and read that number of characters from Starting position
//Input : Demo.txt  12
//Output : Display first 12 characters from Demo.txt

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

void DisplayN(char FName[],int iSize)
{
    int fd = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};   
    int iRet = 0;                             

    fd = open(FName,O_RDONLY);         

    if(fd == -1)
    {
        printf("Unable to open File\n");
    }
    else
    {   
        iRet = read(fd,Buffer,iSize);

        if(iRet == -1)
        {
            printf("Unable to read from file\n");
        }
        else
        {
            if(iSize > iRet)
            {
                iSize = iRet;
            }

            write(1,Buffer,iRet);
        }
        close(fd);
    }
}

int main()
{
    char FileName[30];
    int iValue = 0;

    printf("Enter file name:");
    scanf("%s",FileName);

    printf("Enter the number of character:");
    scanf("%d",&iValue);

    DisplayN(FileName,iValue);

    return 0;
}
