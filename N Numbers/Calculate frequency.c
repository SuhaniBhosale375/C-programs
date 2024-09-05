#include<stdio.h>
#include<stdlib.h>

int Calculate_Frequency(int Arr[],int iSize,int iValue)
{
    int iCnt = 0,iFreq = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iValue)
        {
            iFreq++;
        }
    }

    return iFreq;
}

int main()
{
    int *ptr = 0;
    int iLength = 0, iCnt = 0,iNo = 0,iRet = 0;

    printf("Enter number of elements that we want to store : ");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element to findout the frequency :");
    scanf("%d",&iNo);
    
    printf("Elements of array :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
         printf("%d\n",ptr[iCnt]);
    }       

    iRet = Calculate_Frequency(ptr,iLength,iNo);

    printf("Frequency of given number : %d\n",iRet);

    free(ptr);
    return 0;
}