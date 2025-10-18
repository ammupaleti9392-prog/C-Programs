#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50]="Hello iam Good",s2[50];
	strcpy(s2,s1);
	printf("s2=%s",s2);
	int res=strcmp(s1,s2);
	if(res==0)
	printf("\nstring are equal.");
	else
	printf("\nstrings asre not equal");
}
