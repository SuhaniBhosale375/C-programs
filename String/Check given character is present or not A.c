#include<stdio.h>
#include<stdbool.h>

int Check(char *str,char Ch)
{

    while(*str != '\0')
    {
        if(*str == Ch)
        {
            break;
        }
        str++;
    }

    if(*str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char Arr[20];
    bool bRet = false;
    char cValue = '\0';

    printf("please enter string\n");
    scanf("%[^\n]s",Arr);

    printf("Enter a character to count frequency\n");
    scanf(" %c",&cValue);

    bRet = Check(Arr,cValue);

    if(bRet == true)
    {
        printf("character is present in the string\n");
    }
    else
    {
        printf("character is not present in the string\n");
    }

    return 0;
}