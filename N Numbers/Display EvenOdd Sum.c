#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
    int iCnt = 0, EvenCount = 0,OddCount = 0,E_Sum = 0,O_Sum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            E_Sum = E_Sum + EvenCount++;
        }
        else
        {
            O_Sum = O_Sum +
        }
 
    }

       

   printf("Number of Even elements : %d\n",EvenCount);
   printf("Number of Odd elements : %d\n",OddCount);
}

int main()
{
    int *ptr = 0;
    int iLength = 0, iCnt = 0;

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


    Display(ptr,iLength);

    free(ptr);
    return 0;
}