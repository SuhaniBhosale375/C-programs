#include<stdio.h>

int main()
{
    int R = 0, C = 0;

    for(R = 1; R <= 5; R++)
    {
        for(C = 1; C<= 5; C++)
        {
            if(R == 1 || R == 5|| C == 1|| C == 5)
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