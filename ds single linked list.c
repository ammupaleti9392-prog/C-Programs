#include<stdlib.h>
#include<stdio.h>
#define NODE struct node
NODE
{
	int n;
	NODE *next;
};
NODE *p,*q,*head='\0';
int main()
{	int no,i,ch;
	printf("Enter no.of nodes:");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
 		p=(NODE*)malloc(sizeof(NODE));
 		printf("Enter the node data(create new node):");
 		scanf("%d",&p->n);
 		if(head=='\0')
 		{
 			p->next='\0';
 			head=p;
 			q=p;
 		}
 		else
 		{
 			q->next=p;
 			p->next='\0';
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
 		printf("\n Enter ur choice:");
 		scanf("%d",&ch);
 
		switch(ch)
 		{
 			case 1:
 				insertbeg();
 				break;
 			case 2:
 				insertpos();
 				break;
 			case 3:
 				insertend();
 				break;
 			case 4:
 				deletebeg();
 				break;
 			case 5:
 				deletepos();
 				break;
 			case 6:
 				deleteend();
 				break;
 			case 7:
 				exit(0);
 		}
	}while(ch<=7);
	}
display()
{
 	if(head=='\0')
 		printf("Linked List is empty");
 	else
 	{
 		printf("\nLIST is:\n");
 		q=head;
 		while(q!='\0')
 		{
 			printf("%d->",q->n);
 			q=q->next;
 		}
 		printf("NULL");
 	}
}
insertbeg()
{
	printf("\nInserting at the Beginning:");
 	p=(NODE*)malloc(sizeof(NODE));
 	printf("\nEnter node data:");
 	scanf("%d",&p->n);
 	p->next=head;
 	head=p;
 	display();
}
insertpos()
{
 	int pos,i;
 	printf("\nInserting at any position except beg(1 pos):");
 	p=(NODE*)malloc(sizeof(NODE));
 	printf("\nEnter node data:");
 	scanf("%d",&p->n);
 	printf("Enter position:");
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
	printf("\nInserting at the end:");
	p=(NODE*)malloc(sizeof(NODE));
	printf("\nEnter node data:");
	scanf("%d",&p->n);
	q=head;
	while(q->next!='\0')
	{
 		q=q->next;
	}
	q->next=p;
	p->next='\0';
	display();
}
deletebeg()
{
	 if(head=='\0')
 	printf("Linked List is empty");
 	else
 	{
 		printf("\nDeletion at the begining:");
 		p=head;
 		head=p->next;
 		free(p);
 		display();
 	}	
}
deletepos()
{ 	int pos,i;
 	if(head=='\0')
 		printf("Linked List is empty");
 	else
 	{
 	printf("\nDeletion at any position except beg (1 pos):");
 	printf("\nEnter node data position:");
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
	printf("Linked List is empty");
	else
	{	printf("\n Deleting at the end:");
 		q=head;
 		p=head->next;
 		while(p->next!='\0')
 		{
 			q=q->next;
 			p=p->next;
 		}
 		q->next='\0';
 		free(p);
 		display();
	}
}
