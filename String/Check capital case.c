#include<stdio.h>
#include<stdbool.h>

bool IsCapital(char ch)
{
    if((ch >=  'A') &&(ch <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet =  false;

    printf("Please enter one character\n");
    scanf("%c",&cValue);

    bRet = IsCapital(cValue);

    if(bRet == true)
    {
        printf("%c is a capital latter\n",cValue);
    }
    else
    {
        printf("%c is not a Capital latter\n",cValue);
    }

    return 0;
}