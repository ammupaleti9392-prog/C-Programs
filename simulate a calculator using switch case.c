#include<stdio.h>
int main()
{
	char op;
	double first,second;
	printf("enter an operator(+,-,*,/):");
	scanf("%c",&op);
	printf("enter two operands:");
	scanf("%if%if",&first,&second);
	switch(op)
	{
		case'+':
		printf("%.11f+%.11f=%.11f",first,second,first+second);
		break;
		case'-':
		printf("%.11f-%.11f=%.11f",first,second,first-second);
		break;
		case'*':
		printf("%.11f*%.11f=%.11f",first,second,first*second);
		break;
		case'/':
		printf("%.11f/%.11f=%.11f",first,second,first/second);
		break;
		default:
		printf("error!operator is not correct");
	}
}
