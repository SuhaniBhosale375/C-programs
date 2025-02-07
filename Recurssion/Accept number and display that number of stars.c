#include<stdio.h>


void DisplayR(int No)
{
   static int iCnt = 1;    // static

    if(iCnt <= No)
    {
        printf("* \t");
        iCnt++;
        DisplayR(No);     // Recurcive call
    }
}
int main()
{
    int Value = 0;
    
    printf("Enter the number :");
    scanf("%d",&Value);

    DisplayR(Value);

    printf("\nEnd of main");

    return 0;
}