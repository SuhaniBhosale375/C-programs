#include<stdio.h>

int main()
{
	char ch = 'A';
	int i = 11;
	float f = 3.14;
	double d = 9.567;
	
	printf("Values from the variable are : \n\n");
	
	printf("%c\n",ch);
	printf("%d\n",i);	
	printf("%f\n",f);
	printf("%lf\n",d);
	
	printf("Size of each variable :\n\n");
	
	printf("Size of character : %d\n",sizeof(ch));
	printf("Size of integer: %d\n",sizeof(i));
	printf("Size of float : %d\n",sizeof(f));
	printf("Size of double : %d\n",sizeof(d));
	
	
	printf("Adress of each variable :\n\n");
	
	printf("Adress of character : %d\n",&(ch));
	printf("Adress of interger : %d\n",&(i));
	printf("Adress of float : %d\n",&(f));
	printf("Adress of double : %d\n",&(d));
	
	return 0;
}