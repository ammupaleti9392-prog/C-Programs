#include<stdio.h>
int addition(int,int);
int sub(int,int);
main()
{
	int a=10,b=5,x;
	printf("start");
	x=addition(a,b);
	printf("\n%d",x);
	addition(a,b);
	sub(a,b);
	printf("\nend");
}
int addition(int a,int b)
{
	printf("%d",a+b);
}
int sub(int a,int b)
{
	printf("%d",a-b);
}
