#include<stdio.h>

void Fibonacii()
{
    int iNo = 0,N1= 0,N2 = 1,N3 = 0;

    printf("Enter any positive number\n");
    scanf("%d",&iNo);

    printf("Fibonaci series is => \n");
    printf("%d\t%d\t",N1,N2);

    while(iNo > N3)
    {
        N3 = N1 + N2;

        printf("%d\t",N3);

        N1 = N2;
        N2 = N3;

        iNo--;
    }


}

int main()
{
    Fibonacii();

    return 0;
}