#include<stdio.h>

char CharToggleX(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        return ch + 32;
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        return ch - 32;
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

    cRet = CharToggleX(cVaule);

    printf("Toggled character is : %c\n",cRet);
    
    return 0;
}