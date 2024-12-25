/*
    Problem statement : Accept ammount in US dollar and return its corresponding value in Indian currency.
        Concider 1$ = 70 ruppes

    Input   : 3
    Output  : 270
*/

#include<stdio.h>
int DollarToINR(int iNo)
{
    int iINR = 0;

    iINR = iNo * 70;

    return iINR;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number of USD\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Values in INR is %d",iRet);

    return 0;
}