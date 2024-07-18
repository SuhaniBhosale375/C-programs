#include<stdio.h>

int main()
{
	int Num = 0,i = 0;
	
	printf("Enter an Integer Number : ");
	scanf("%d",&Num);
	
	printf("Table of %d is : \n",Num);
	
	for(i = 1; i <= 10; i++)
	{
		printf("%5d\n",(Num*i));
	}
	
	
	return 0;
}