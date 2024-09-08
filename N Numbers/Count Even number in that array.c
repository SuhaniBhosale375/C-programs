#include<stdio.h>
#include<stdlib.h>

int Count_Even(int Arr[],int iSize)
{
    int iCnt = 0, EvenCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            EvenCount++;
        }
    }

    return EvenCount;
}

int main()
{
    int *ptr = 0;
    int iLength = 0, iCnt = 0,iRet = 0;

    printf("Enter number of elements that we want to store : ");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    printf("Elements of array :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
         printf("%d\n",ptr[iCnt]);
    }       


    iRet = Count_Even(ptr,iLength);

    printf("Even elements present in array are :%d\n",iRet);

    free(ptr);
    return 0;
}