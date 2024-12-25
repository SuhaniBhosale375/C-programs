#include<Stdio.h>

#define i 9

int C = 0;

void Print_I(int R)
{
        for(C = 1; C <= i; C++)
        {
           if(R == 1 || R == i || (C == (i/2 +1)))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("    ");
}

void Print_L(int R)
{
        for(C = 1; C<= i; C++)
        {
           if(C == 1 || R == i)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
     printf("   ");
}
void Print_O(int R)
{
        for(C = 1; C<= i; C++)
        {
            if((C == 1 && R < i && R > 1) || (C == i  && R < i && R > 1) || (R == i && (C < i)&& (C > 1) || (R == 1) && (C < i)&& C > 1))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
     printf("     ");

}

void Print_V(int R)
{
        for(C = 1; C<= i; C++)
        {
           if((((C == 1)&&(R == i/2+1))||(C == 2)&&(R == i/2+2))||((C == 3)&&(R == i/2+3))||((C == i/2)&&(R == i -1))||((C == i/2 + 1) && (R == i))||((C == i)&&(R == i/2+1)) || ((C == i-1)&&(R == i/2+2))||((R == i-1)&&(C == i/2+2))||((R == i-2)&&(C == i-2)))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
     printf("    ");
}

void Print_E(int R)
{
        for(C = 1; C<= i; C++)
        {
            if(R == 1||C == 1 || R == i || (R == (i/2) + 1) && (R >= C))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
    }
   printf("   ");
}

void Print_A(int R)
{
    for(C = 1; C<= i; C++)
        {
           if(((C == 1) || (C == i-1) ) ||((R == (i/2+1)) && ( C > 1) && (C < i) ) || ((R == 1) && ( C > 1) && (C < i)))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
    }
   printf("   ");
}

void Print_N(int R)
{
    for(C = 1; C<= i; C++)
        {
            if((C == 1) || (C == R)||(C == i))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
    }
   printf("   ");
}

void Print_D(int R)
{
    for(C = 1; C<= i; C++)
        {
            if((C == 1) || ((R == 1)&&(C < i-1)) || ((C == i-1)&&(R != 1)&&(R != i))||((R == i)&& (C < i-1)))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
    }
   printf("   ");
}



int main()
{
    int  R = 0;
    printf("\n");
    for(R = 1;R <= i;R++)
        {
            Print_I(R);
            printf("\n");
        }
        printf("\n");
        printf("\n");

        for(R = 1;R <= i;R++)
        {
            Print_L(R);
            Print_O(R);
            Print_V(R);
            Print_E(R);
            printf("\n");
        }
        printf("\n");
        printf("\n");

        for(R = 1;R <= i;R++)
        {
            Print_I(R);
            Print_N(R);
            Print_D(R);
            Print_I(R);
            Print_A(R);
            printf("\n");

        }

    return 0;
}