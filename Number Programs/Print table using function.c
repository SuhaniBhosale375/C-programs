#include<stdio.h>

void PrintTable(int No)
{
	int i;
	
	for(i = 1; i <= 10;i++)
	{
		printf("%5d\n", (No*i) );
	}
}

int main()
{
	int Num = 0;
	
	printf("Enter an Integer Number : ");
	scanf("%d",&Num);
	
	printf("Table of %d is : \n",Num);
	
	PrintTable(Num);
	
	return 0;
}