#include<stdio.h>

int main()
{
    char Name[30];

    printf("Enter your full name :");
    // scanf("%s",Name);
    scanf("%[^'\n']s",&Name);

    printf("My name is  %s\n",Name);

    return 0;
}