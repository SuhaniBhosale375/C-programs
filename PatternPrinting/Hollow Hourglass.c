#include<stdio.h>

int main()
{
    int i = 0, j = 0, k = 0, R = 5;

    for(i = R; i >= 1; i--)
    {
        for(j = 1; j <= R - i; j++)
        {
            printf(" ");
        }
        for(k = 1; k <= (2 * i - 1); k++)
        {
            if((k == 1) || (k == 2*i-1) || (i == R))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i = 2; i <= R; i++)
    {
        for(j = 1; j <= R -i; j++)
        {
            printf(" ");
        }
        for(k = 1; k <= (2* i - 1 ); k++ )
        {
            if((k == 1) || (k == 2*i-1) || (i == R))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}