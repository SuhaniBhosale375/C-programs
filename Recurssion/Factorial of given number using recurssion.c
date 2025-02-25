#include<stdio.h>

// 4
// 4 + 3 + 2 + 1 = 10

int FactorialR(int No)
{
    static int  Fact = 1;
    static int iCnt = 1;

    if(iCnt <= No)
    {
        Fact = Fact * iCnt;
        iCnt++;
        FactorialR(No);
    }
    return Fact;
}

int main()
{
    int Value = 0;
    int iRet = 0;
    
    printf("Enter the number :");
    scanf("%d",&Value);

    iRet = FactorialR(Value);
    printf("Factorial is : %d",iRet);
    return 0;
}