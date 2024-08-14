#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iSize)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

int main()
{
    int *Ptr = NULL;
    int iRet = 0,iCnt = 0, iLength = 0;

    printf("Enter the number of element that we want to store :\n");
    scanf("%d",&iLength);

    Ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Ptr[iCnt]);
    }

    printf("Elements of Array are\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\n",Ptr[iCnt]);
    }

    iRet = Summation(Ptr , iLength);

    printf("Addition is : %d\n",iRet);

    free(Ptr);

    return 0;
}