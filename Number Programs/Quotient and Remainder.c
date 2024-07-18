#include<stdio.h>

int Quotient(int Q_No,int Q_Div)
{
	int Q_Ans = 0;
	
	Q_Ans = Q_No /Q_Div;
	
	return Q_Ans;
}

int Remainder(int R_No,int R_Div)
{
	int R_Ans = 0;
	
	R_Ans = R_No % R_Div;
	
	return R_Ans;
}

int main()
{
	int No = 0,Div = 0,rem = 0;
	float que = 0;
	
	printf("Enter two Numbers");
	scanf("%d%d",&No,&Div);
	
	que = Quotient(No,Div);
	
	rem = Remainder(No,Div);
	
	printf("Quotient is : %f\n",que);
	
	printf("Remainder is : %d\n",rem);
	
	return 0;
	
}