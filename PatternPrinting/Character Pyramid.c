#include<stdio.h>

int main()
{
    int i = 0,j = 0,k = 0;

    int R = 0;
    char ch = 'A';

    printf("Enter number of rows ");
    scanf("%d",&R);

    for(i = 1; i <= R; i++)
    {
        for(j = 1; j <= (2 * R - i); j++)
        {
            printf(" ");
        }
        for(k = 1; k <= (2 * i - 1); k++,ch++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    
    return 0;
}