//Write a program which accepts file name from user and count number of small characters from that file
//Input : Demo.txt
//Output : Number of small characters are : 36

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

int CountSmall(char FName[])
{
    int fd = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};   
    int iRet = 0;                             
    int iCnt = 0;
    int iSmallCount = 0;

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
                if((Buffer[iCnt] >= 'a') && (Buffer[iCnt] <= 'z'))
                {
                    iSmallCount++;
                }
            }
        }
        close(fd);
    }
    return iSmallCount;
}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter file name:");
    scanf("%s",FileName);

    iRet = CountSmall(FileName);

    printf("Number of Small characters are : %d",iRet);

    return 0;
}
