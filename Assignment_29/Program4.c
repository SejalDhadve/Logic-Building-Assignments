//Write a program which accepts file name from user and one charcter from user and count number of occurence of that Characters from that file
//Input : Demo.txt  'A'
//Output : Frequency of A is : 5

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

int CountChar(char FName[],char ch)
{
    int fd = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};   
    int iRet = 0;                             
    int iCnt = 0;
    int iCharCount = 0;

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
                if(Buffer[iCnt] == ch)
                {
                    iCharCount++;
                }
            }
        }
        close(fd);
    }
    return iCharCount;
}

int main()
{
    char FileName[30];
    int iRet = 0;
    char cValue;

    printf("Enter file name:");
    scanf("%s",FileName);

    printf("Enter the character:");
    scanf(" %c",&cValue);

    iRet = CountChar(FileName,cValue);

    printf("Frequency of Character is : %d",iRet);

    return 0;
}
