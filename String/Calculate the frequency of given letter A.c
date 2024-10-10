#include<stdio.h>

int Countfrequency(char *str,char Ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == Ch)
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;
    char cValue = '\0';

    printf("please enter string\n");
    scanf("%[^\n]s",Arr);

    printf("Enter a character to count frequency\n");
    scanf(" %c",&cValue);

    iRet = Countfrequency(Arr,cValue);

    printf("Frequency of a Given latters is : %d\n",iRet);

    return 0;
}