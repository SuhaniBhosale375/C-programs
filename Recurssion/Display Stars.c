#include<stdio.h>


void DisplayR()
{
   static int iCnt = 1;    // static

    if(iCnt <= 4)
    {
        printf("* \t");
        iCnt++;
        DisplayR();     // Recurcive call
    }
}
int main()
{
    printf("Inside the main\n");

    DisplayR();

    printf("End of main\n");

    return 0;
}