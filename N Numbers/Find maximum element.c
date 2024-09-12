#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize)
{
    int iCnt = 0, iMax = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax )
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
}

int main()
{
    int *ptr = NULL;
    int iRet = 0, iCnt = 0,iLength = 0;

    printf("Enter the number of elemnts that we want to store :");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Maximum(ptr , iLength);

    printf("Maximum element in array : %d",iRet);

    free(ptr);

    return 0;

}