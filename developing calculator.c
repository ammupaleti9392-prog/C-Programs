#include<stdio.h>
int main()
{
	char op;
	int f,s;
	printf("enter an operator=");
	scanf("%c",&op);
	printf("\n enter two operands:");
	scanf("%d%d",&f,&s);
	switch(op)
	{
		case'+':
	       printf("\nsum=%d",f+s);
		break;
		case'-':
		   printf("\ndiff=%d",f-s);
		break;
		case'*':
		   printf("\nmul=%d",f*s);
		break;
		default:
			printf("\n invalid");
			printf("\n end");
	}
}
