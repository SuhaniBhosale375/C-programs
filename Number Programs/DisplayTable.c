///////////////////////////////////////////////////////////////////////////
//  Problem statement : Program to Dispay table of givan number
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayTable(int iNo)
{
    
    int iCnt = 0;
    printf("**************************************\n");
   
    printf("Table of %d is : \n",iNo);
   
    printf("**************************************\n");
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\n",iNo * iCnt);
    }

    printf("**************************************\n");
}
int main()
{
    int iValue = 0;

    printf("Enter any number :");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}