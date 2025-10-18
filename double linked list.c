#include<stdio.h>
#include<stdlib.h>
#define NODE struct node
NODE
 {
 	NODE*prev;
	int n;
	NODE*next;
};
NODE*p,*q,*end,*head='\0';
int main()
{
	int no,ch,i;
	printf("enter no of nodes:");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
		p=(NODE*)malloc(sizeof(NODE));
 		printf("Enter the node data(create new node):");
 		scanf("%d",&p->n);
		if(head=='\0')
		{
		p->prev='\0';
		p->next='\0';
		head=p;
		end=p;
		q=p;}
		else{
			q->next=p;
			p->prev=q;
			p->next='\0';
			end=p;
			q=p;
		}
    } 
    display();
		do
		{
			printf("\n\t MAINMENU");
			printf("\n\t 1.INSERTBEG");
			printf("\n\t 2.INSERTPOS");
			printf("\n\t 3.INSERTEND");
			printf("\n\t 4.DELETEBEG");
			printf("\n\t 5.DELETEPOS");
			printf("\n\t 6.DELETEEND");
			printf("\n\t 7.EXIT");
			printf("enter your choice");
			scanf("%d",&ch);
			switch(ch)
			{
			case 1: insertbeg(); break;
				case 2: insertpos(); break;
				case 3: insertend(); break;
				case 4: deletebeg(); break;
				case 5: deletepos(); break;
				case 6: deleteend(); break;
				case 7: exit(0);
			}
		}while(ch<=7);
}
display()
{
  printf("forward traversing");
  printf("roots->");
  q=head;
  while(q!='\0')
  {
  	printf("%d->",q->n);
  	q=q->next;
  }
  printf("null");
  printf("backward traversing");
  printf("roots->");
  q=end;
  while(q!='\0')
  {
  	printf("%d->",q->n);
  	q=q->prev;
  }
  printf("null");
}
insertbeg()
{
	printf("\ninsertion at begging");
	p=(NODE*)malloc(sizeof(NODE));
	printf("enter node data:");
	scanf("%d",&p->n);
	p->next=head;
	p->prev='\0';
	head->prev=p;
	head=p;
	display();
}
insertpos()
{
	int pos,i;
	printf("\ninsertion at any pos");
	p=(NODE*)malloc(sizeof(NODE));
	printf("enter node data:");
	scanf("%d",&p->n);
	printf("enter node pos\n");
	scanf("%d",&pos);
	q=head;
	for(i=0;i<pos-1;i++)
	{
		q=q->next;
	}
	p->prev=q;
	p->next=q->next;
	q->next=p;
	p->next->prev=p;
	display();
}
insertend()
{	
	printf("\ninsertion at end");
	p=(NODE*)malloc(sizeof(NODE));
	printf("enter node data:");
	scanf("%d",&p->n);	
	q=head;
	while(q->next!='\0')
	{
		q=q->next;
	}
	q->next=p;
	p->prev=q;
	p->next='\0';
	end=p;
	display();	
}
deletebeg()
{
	if(head=='\0')
	printf("linked list is empty");
	else
	{
	printf("\n deletion at beggining");
	p=head;
	head=p->next;
	head->prev='\0';
	free(p);
	display();
}}
deletepos()
{
	int pos,i;
	if(head=='\0')
	printf("linked list is empty");
	else
	{
	printf("\n deletion at pos");
	printf(" enter node pos");
	scanf("%d",&pos);
	q=head;
	p=head->next;
	for(i=1;i<pos-1;i++)
	{
		q=q->next;
		p=p->next;
	}
	q->next=p->next;
	p->next->prev=q;
	free(p);
	display();
}
}
deleteend()
{
	if(head=='\0')
	printf("linked list is empty");
    else
	{
	printf("\n deletion at end");
	q=head;
	p=head->next;
	while(p->next!='\0')
	{
		q=q->next;
		p=p->next;
	}
	q->next='\0';
	end=q;
	free(p);
	display();
}}


