#include<stdio.h>
void struprx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
    
}
int main()
{
    char Arr[20];

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    struprx(Arr);

    printf("String after conversion is : %s\n",Arr);

    return 0;
}
