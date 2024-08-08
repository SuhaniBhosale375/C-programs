#include<stdio.h>

int main()
{
	int No1 = 0;
	int No2 = 0;
	
	printf("Enter any two Numbers\n");
	scanf("%d%d",&No1,&No2);

	printf("Value of No1 : %d\n",No1);
	printf("Value of No2 : %d\n",No2);
	
	No1 = No1 + No2;
//	No1 = 10 + 11;
//  No1 = 21;
	No2 = No1 - No2;
	No1 = No1 - No2;
	
	printf("After Swapping\n");
	
	printf("Value of No1 : %d\n",No1);
	printf("Value of No2 : %d\n",No2);
	
	
}