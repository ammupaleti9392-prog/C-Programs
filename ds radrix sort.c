#include<stdio.h>
//function to get the maximum value in an array
int getmax (int a[],int n)
{
	int max = a[0],i;
	for(i=1;i<n;i++)
	{
		if(a[i] > max)
		max = a[i]; 
	}
	return max;
}
//function to implement radix sort
void radixsort(int a[],int n)
{
	int big,nod=0,steps,count[10];
	int i,j,k,bucket[10][n],loc,div = 1;
	big = getmax(a,n);
	//count the number of digits in the largest number
	 while (big > 0)
	 {
	 	nod++;
	 	big = big/10;
	 }
	 for (steps = 1;steps <= nod; steps++)
	 {//initialize count array
	   for(j=0;j<10;j++)
	   {
	   	count[j] = 0;
	   }
	   //distribute elements into buckets
	   for (i=0;i<n;i++)
	   {
	   	loc = (a[i]/ div) % 10;
	   	bucket[loc][count[loc]++] = a[i];
	   }
	   //collect elements back into array
	   k = 0;
	   for (j=0;j<10;j++)
	   { //looping through digits 0-9
	     for (i=0;i < count[j]; i++)
	     {
	     	a[k++] = bucket[j][i];
		 }
	   }
	   // move to the next digit
	   div = div * 10;
	 }
}
// function to print array elements
void printarray(int a[],int n)
{
	int i;
	for (i=0;i<10;++i)
	{
		printf("%d",a[i]);
	}
	printf("\n");
}
int main()
{
	int a[100],n,i;
	printf("\nEnter no of elements:");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Before sorting,array elements are:\n");
	printarray(a,n);
	radixsort(a,n);
	printf("Ater applying radix sort,array elements are:\n");
	printarray(a,n);
	return 0;
}
