#include<stdio.h>

int main()
{
    int i = 0,j = 0,k = 0;

    int R = 0;
    int No = 1;

    printf("Enter number of rows ");
    scanf("%d",&R);

    for(i = 1; i <= R; i++)
    {
        for(j = 1; j <= R - i; j++)
        {
            printf(" ");
        }
        for(k = 1,No = 1 ; k <= (2 * i - 1); k++,No++)
        {
            printf("%d",No);
        }
        printf("\n");
    }
    
    for(i = R - 1; i >= 1; i--)
    {
        for(j = 1; j <= R - i; j++)
        {
            printf(" ");
        }
        for(k = 1,No = 1 ; k <= (2 * i - 1); k++,No++)
        {
            printf("%d",No);
        }
        printf("\n");
    }
    
    return 0;
}