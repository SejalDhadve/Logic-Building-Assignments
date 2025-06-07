/* Accept N numbers from the user and return product of all odd numbers
Input:  N :6
        Elements: 15 66 3 70 10 88
Output: 45

Input:  N :6
        Elements: 44  66  72  70  10  88
Output: 0
*/

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
    int iCnt = 0;
    int iProduct = 1;
    int iOddCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)  
        {
            iProduct = iProduct * Arr[iCnt];
            iOddCount++;
        }
    }
    if(iOddCount == 0)
    {
        return 0;
    }
    return iProduct;
}

int main()
{
    int iSize = 0,iCnt = 0,iRet = 0;
    int *p = NULL;

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
    iRet = Product(p,iSize);

    printf("Product is:%d",iRet);

    free(p);

    return 0;
}