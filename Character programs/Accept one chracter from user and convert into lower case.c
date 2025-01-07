#include<stdio.h>

char ToLowerX(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        return ch + 32;
    }
    else
    {
        return ch;
    }
    
}

int main()
{
    char cVaule = '\0';
    char cRet = '\0';

    printf("Enter the character\n");
    scanf("%c",&cVaule);

    cRet = ToLowerX(cVaule);

    printf("character int the Lower case is : %c\n",cRet);
    
    return 0;
}