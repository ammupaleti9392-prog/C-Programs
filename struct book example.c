#include<stdio.h>
struct book
{
	char title[20];
	int pages;
	float price;
};
void main()
{
	struct book b1;
	struct book b2={"computerscience",25,250.0};
	printf("enter book1 details using struct:title pages price an:\n");
	scanf("%s%d%f",b1.title,&b1.pages,&b1.price);
	printf("%s,%d,%f,\n",b1.title,b1.pages,b1.price);
	printf("\nbook2 details are using struct:\n");
	printf("%s,%d,%f",b2.title,b2.pages,b2.price);
}
