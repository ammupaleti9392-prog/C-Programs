#include <stdio.h>
int main()
{
	int m,n,p,q,c,d,k, sum=0;
	int first[10][10],second[10][10],multiply[10][10];
	printf("enter no of rows and columns of first matrix\n");
	scanf("%d%d",&m,&n);
	printf("enter elements of first matrix\n");
	for(c=0;c<m;c++)
	for(d=0;d<n;d++)
	scanf("%d",&first[c][d]);
	printf("enter number of rows and coloumns of second matrix\n");
	scanf("%d%d",&p,&q);
	if(n!=p)
	printf("the multiplication is not possible.\n");
	else
	{
		printf("enter elements of second matrix\n");
		for (c=0;c<p;c++)
		for(d=0;d<q;d++)
		scanf("%d",&second[c][d]);
		for(c=0;c<m;c++)
		{
			for(d=0;d<q;d++)
			{
				for(k=0;k<p;k++)
				{
					sum=sum+first[c][k]*second[k][d];
				}
				multiply[c][d]=sum;
				sum=0;
			}
		}
		printf("product of the matrices:\n");
		for(c=0;c<m;c++)
		{
			for (d=0;d<q;d++)
			printf("%d\t",multiply[c][d]);
			printf("\n");
		}
	}
}
