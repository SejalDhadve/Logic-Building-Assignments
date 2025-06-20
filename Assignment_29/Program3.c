//Write a program which accepts file name from user and count number of white spaces from that file
//Input : Demo.txt
//Output : Number of white spaces are : 8

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

int CountWhiteSpace(char FName[])
{
    int fd = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};   
    int iRet = 0;                             
    int iCnt = 0;
    int iSpaceCount = 0;

    fd = open(FName,O_RDONLY);         

    if(fd == -1)
    {
        printf("Unable to open File\n");
    }
    else
    {   
        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            for(iCnt = 0;iCnt < iRet;iCnt++)
            {
                if(Buffer[iCnt] == ' ')
                {
                    iSpaceCount++;
                }
            }
        }
        close(fd);
    }
    return iSpaceCount;
}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter file name:");
    scanf("%s",FileName);

    iRet = CountWhiteSpace(FileName);

    printf("Number of White spaces are : %d",iRet);

    return 0;
}
