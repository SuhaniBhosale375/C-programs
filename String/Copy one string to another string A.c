#include<stdio.h>

int strcpyX(char *src,char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;

        src++;
        dest++;
    }
    *dest = *src;
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr,Brr);       // strcpyX(100,200);

    printf("Copied string is : %s\n",Brr);

    return 0;
}
