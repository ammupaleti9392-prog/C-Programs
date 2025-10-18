#include<stdio.h>
int addition(int,int);
int mul(int,int);
int sub(int,int);
main()
{
	int a=10,b=5,x,y,z;
	printf("start");
	x=addition(a,b);
	printf("\n%d",x);
	y=mul(a,b);
	printf("\n%d",y);
	z=sub(a,b);
	printf("\n%d",z);
	printf("\nend");
}
int addition(int a,int b)
{
  return a+b;
}
int mul(int a,int b)
{
  return a*b;
}
int sub(int a,int b)
{
  return a-b;	
}
