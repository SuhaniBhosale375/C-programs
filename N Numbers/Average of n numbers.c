#include<stdio.h>
#include<stdlib.h>

int Average(int Arr[],int iSize)
{
    int iAvg = 0, iCnt = 0,iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    iAvg = iSum / iSize;

    return iAvg;
}
int main()
{
    int *ptr = NULL;
    int iRet = 0, iLength = 0, iCnt = 0;

    printf("Enter number of elements that we want to store :\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter array elements :\n");

    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Elements of array : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet = Average(ptr ,iLength);

    printf("Average is : %d",iRet);

    free(ptr);

    return 0;
}