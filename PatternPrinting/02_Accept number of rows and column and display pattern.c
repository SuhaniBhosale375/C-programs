#include<stdio.h>
//  Time Complexity is 2N
//  4
//  1   2   3   4   *   *   *   *


void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)           // Updater
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d \t",iCnt);      
    }
     for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");      
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}