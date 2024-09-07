#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Cheak_Occurence(int Arr[],int iSize,int iValue)
{
    int iCnt = 0,iFreq = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iValue)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
}

int main()
{
    int *ptr = 0;
    int iLength = 0, iCnt = 0,iNo = 0;
    BOOL bRet = 0;

    printf("Enter number of elements that we want to store : ");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element to check the occurence :");
    scanf("%d",&iNo);
    
    printf("Elements of array :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
         printf("%d\n",ptr[iCnt]);
    }       

    bRet = Cheak_Occurence(ptr,iLength,iNo);

    if(bRet == TRUE)
    {
        printf("Element is occured in array\n");
    }
    else
    {
        printf("Element is not occured in array\n");
    }

    free(ptr);
    return 0;
}