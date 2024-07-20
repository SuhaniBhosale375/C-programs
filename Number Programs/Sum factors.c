#include<stdio.h>

// O(N/2)
int SumFactors(int iNo)
{

    int iCnt = 0;
    int iSum = 0;

    printf("Factors of %d : \n",iNo);

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
     {
        if((iNo % iCnt) == 0)
        {

            iSum = iSum + iCnt;
        }
    }

    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);

    printf("Summation of Factors : %d\n",iRet);

    return 0;
}
