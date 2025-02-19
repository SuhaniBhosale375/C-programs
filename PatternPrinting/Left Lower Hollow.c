#include<stdio.h>

int main()
{
    int i = 0, j = 0, R = 5;

    for(i = 1; i <= R; i++)
    {
        for(j = 1; j <= R; j++)
        {
            if((i >= j))
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
    return 0;
}