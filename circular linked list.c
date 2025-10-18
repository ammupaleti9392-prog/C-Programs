#include<stdio.h>
#include<stdlib.h>
#define NODE struct node
NODE
 {
	int n;
	NODE *next;
};
NODE *p,*q,*head='\0';
int main()
{
	int no,ch,i;
	printf("enter no of nodes:");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		p=(NODE*)malloc(sizeof(NODE));
		printf("enter node data:");
		scanf("%d",&p->n);
		if(head=='\0')
		{
			p->next=head;
			head=p;
			q=p;
		}else
		{
			q->next=p;
			q=p;
			q->next=head;
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
			printf("\n enter your choice");
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
	if(head=='\0')
	
		printf("linked list is empty\n");	
	else{
		printf("\n list is :\n");
		q=head;
		while(q->next!=head)
		{
			printf("%d->",q->n);
			q=q->next;
		}
		printf("%d->",q->n);
		printf("back to head");
	}
}
insertbeg()
{
	printf("\ninsertion at begging");
	p=(NODE*)malloc(sizeof(NODE));
	printf("\nenter node data:");
	scanf("%d",&p->n);
	p->next=head;
	head=p;
	while(q->next!=head)
	{
		q=q->next;
	}
	q->next=p;
	head=p;
	display();
}
insertpos()
{
	int pos,i;
	printf("\ninsertion at any pos except beg(1pos):");
	p=(NODE*)malloc(sizeof(NODE));
	printf("\nenter node data:");
	scanf("%d",&p->n);
	printf("\nenter position:");
	scanf("%d",&pos);
	q=head;
	for(i=1;i<pos-1;i++)
	{
		q=q->next;
	}
	p->next=q->next;
	q->next=p;
	display();
}
insertend()
{	
	printf("\ninsertion at end");
	p=(NODE*)malloc(sizeof(NODE));
	printf("enter node data:");
	scanf("%d",&p->n);	
	q=head;
	while(q->next!=head)
	{
		q=q->next;
	}
	q->next=p;
	p->next=head;
	display();	
}
deletebeg()
{
	if(head=='\0')
	printf("linked list is empty");
	else
	{
	printf("\n deletion at beggining");
	p=q=head;
	while(p->next!=head)
	{
		p=p->next;
	}
	head=head->next;
	p->next=head;
	free(p);
	display();
}
}
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
	while(p->next!=head)
	{
		q=q->next;
		p=p->next;
	}
	q->next=head;
	free(p);
	display();
}
}


