
#include<stdio.h>

void Factors(int Num)
{
    int i = 0;

    for(i = Num/2; i >= 1; i--)
    {
        if(Num % i == 0)
        {
           printf("%d\t",i);
        }
    }

}
int main()
{
    int No = 0;

    printf("Enter any number");
    scanf("%d",&No);

    Factors(No);

    return 0;
}