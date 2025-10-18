#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("enter temp in fahrenheit:");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)/1.8;
	printf("temp im celsius:%.2f",celsius);
}
