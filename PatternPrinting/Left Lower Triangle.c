#include<stdio.h>
#include<conio.h>

void Pattern(int iRow,int iCol)
{
    printf("\n\n Pattern is => \n\n");
    int i = 0,j = 0;

    for( i = 1; i <= iRow; i++)
    {
        for( j = 1; j <= iCol; j++)
        {
            if(i >= j )
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
int main()
{
    int R = 0, C = 0;

    printf("\n Enter row Size = ");
    scanf("%d",&R);

    printf("\n Enter colomn Size = ");
    scanf("%d",&C);

    Pattern(R,C);

    return 0;
}
