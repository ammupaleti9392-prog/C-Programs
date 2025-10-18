#include<stdio.h>
void merge( int array[],int low,int mid,int high)
{
	int b[10];
	int i=low,j=mid+1,k=0;
	while(i<=mid&&j<=high)
	{
		if(array[i]<array[j])
		{
		b[k]=array[i];
		i++;
		}else
		{
			b[k]=array[j];
			j++;
		}k++;
	}
	while(i<=mid)
	{
		b[k]=array[i];
		i++;k++;
	}
		while(j<=high)
	{
		b[k]=array[j];
		j++;k++;
	}
	for(i=low,k=0;i<=high;i++,k++)
	array[i]=b[k];
}
void mergesort(int array[],int left,int right)
{
	if(left<right)
	{
		int mid=(left+right)/2;
		mergesort(array,left,mid);
		mergesort(array,mid+1,right);
		merge(array,left,mid,right);
	}
}
int main()
{
	int n,i,array[25];
	printf("how many numbers  of elements are you going to enter?");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	mergesort(array,0,n-1);
	printf("sorted elements are:\n");
	for(i=0;i<n;i++)
	printf("%d\n",array[i]);
	return 0;
}



