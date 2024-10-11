#include<stdio.h>

char ToUpperX(char ch)
{
    return ch - 32;
}

int main()
{
    char cVaule = '\0';
    char cRet = '\0';

    printf("Enter the character\n");
    scanf("%c",&cVaule);

    cRet = ToUpperX(cVaule);

    printf("character in the upper case is : %c\n",cRet);
    
    return 0;
}