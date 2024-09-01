
#include<stdio.h>

int Difference(int Num)
{
    int i = 0,Fact_Sum = 0,Non_Fact_Sum = 0;

    for(i = 1; i < Num; i++)
    {
        if(Num % i == 0)
        {
          Fact_Sum = Fact_Sum + i;
        }
        if(Num % i != 0)
        {
            Non_Fact_Sum = Non_Fact_Sum + i;
        }
    }

    return (Fact_Sum - Non_Fact_Sum);

}
int main()
{
    int No = 0,iRet = 0;

    printf("Enter any number");
    scanf("%d",&No);

    iRet = Difference(No);

    printf("Difference is : %d",iRet);

    return 0;
}