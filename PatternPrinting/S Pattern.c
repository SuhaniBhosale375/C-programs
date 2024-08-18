#include<stdio.h>

int main()
{
    int R = 0, C = 0;
    int i = 0,j = 0;

    printf("Enter Row Number :\n");
    scanf("%d",&i);

    printf("Enter Column Number :\n");
    scanf("%d",&j);

    for(R = 1; R <= i; R++)
    {
        for(C = 1; C<= j; C++)
        {
            if(R == 1 || R == j || R == (j/2)+ 1 || (R > C  && C == 1 && R <= (j/2))|| (R < C && C == j && R > (j/2)))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

}