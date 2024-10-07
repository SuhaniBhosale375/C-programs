#include<stdio.h>
int strlenX(char str[])
{
    int iCnt = 0,i = 0;

    while(str[i] != '\0')
    {
        iCnt++;
        i++;
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