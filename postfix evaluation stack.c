#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define max 100

	int stack[max];
	int top=-1;
	void push(int ele)
	{
		if(top==(max-1))
		{
			printf("stack is full\n");
		}
		else
		{

			top++;
			stack[top]=ele;
		}
	}
	int pop()
	{
		if(top==-1)
		{
			printf("stack is empty\n");
		}
		else
		{
			int ele=stack[top];
			top--;
		return ele;
			
		}
	}

int evaluatepostfix(char *exp){
	int i;
	for(i=0;exp[i]!='\0';i++){
		if(isdigit(exp[i]))
		{
			push(exp[i]-'0');
		}else
		{
		  int operand2=pop();
		  int operand1=pop();
			switch(exp[i])
			{
				case'+': push(operand1+operand2); break;
				case'-': push(operand1-operand2); break;
				case'*': push(operand1*operand2); break;
				case'/': push(operand1/operand2); break;			
			}
		}
	}
	return pop();
}
int main()
{
	char expression[]="231*+9-";
	printf("result=%d",evaluatepostfix(expression));
	return 0;
}






