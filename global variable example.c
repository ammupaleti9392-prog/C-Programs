#include<stdio.h>
extern int a=20;
void robo()
{
	a=a+5;	
}
int main()
{   
	robo();
	robo();
	robo();
	printf("\n a=%d",a);
}
