#include<stdio.h>
void addition(int,int);
void mul(int,int);
void sub(int,int);
main()
{
	int a=10,b=5;
	printf("start");
	addition(a,b);
	mul(a,b);
	sub(a,b);
	printf("\nend");
}
void addition(int a,int b)
{
	printf("\n%d",a+b);
}
void mul(int a,int b)
{
	printf("\n%d",a*b);
}
void sub(int a,int b)
{
	printf("\n%d",a-b);
}
