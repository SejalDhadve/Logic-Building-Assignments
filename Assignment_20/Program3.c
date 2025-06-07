/* Accept N numbers from the user and check whether that number contains 11 in it or not
Input:  N:  6
        No : 66
        Elements: 85  66  11  80  93  88 
Output: 3

Input:  N:  6
        No : 12
        Elements: 85  11  3  66  93  88 
Output: -1
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
    int iCnt = 0;

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iSize = 0,iCnt = 0,iRet = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter the number of elements:");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d Elements\n",iSize);

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter Element %d:",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }
    bRet = Check(p,iSize);

    if(bRet == TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is not present");
    }

    free(p);

    return 0;
}