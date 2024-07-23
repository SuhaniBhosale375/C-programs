#include<stdio.h>

void DisplayRevese(int iNo)
{
    int iCnt = 0;
    printf("----------------------------------\n");

    iCnt = iNo;
    while(iCnt > 0)
    {
        printf("%d\t",iCnt);
        iCnt--;
    }

    printf("\n----------------------------------");
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    DisplayRevese(iValue);

    return 0;
}