#include<stdio.h>

int main()
{
    int i = 0;

    for(i = 1; i <= 127; i++)
    {
        printf("%d = %c\n",i,i);
    }
    return 0;
}