#include<stdio.h>
int strlenX(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }

    return iCnt;
}
int main()
{
    char Name[20];
    int iRet = 0;

    printf("please enter string :");
    scanf("%[^'\n']s",&Name);

    iRet = strlenX(Name);

    printf("Number of character are %d\n",iRet);

    return 0;
}