#include<stdio.h>
#include<stdlib.h>
#define node struct node
node
{
	int n;
	node*next;
};
node*p,*top='\0';
void main()
{
	int ch;
	printf("\n\t\t main menu");
	printf("\n\t 1.push");
	printf("\n\t 2.pop");
	printf("\n\t 3.display");
	printf("\n\t 4.exit");
do
{
	printf("\n enter ur choice :");
	scanf("%d",&ch);
	switch(ch)
	{
		case1: push(); break;
	    case2: pop(); break;
		case3: display(); break;
		case4: exit(0); 
	}
}while(ch<=4);
  getch();
}
push()
{
	p=(node*)malloc(sizeof(node));
	printf("enter the node data:");
	scanf("%d",&p->n);
	p->next=top;
	top=p;
}
pop()
{
	if(top=='\0')
	printf("stack is empty");
	else
	{
		p=top;
		printf("deleted element is:%d",p->n);
		top=top->next;
	}
}
display()
{
	if(top=='\0')
	printf("stack is empty");
	else{
		for(p=top;p!='\0';p=p->next)
		printf("%d->",p->n);
	}
}
