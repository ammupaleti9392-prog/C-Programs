#include<stdio.h>
#include<string.h>
int main()
{
	char s3[50]="Aditya";
	char s4[60]="university";
	printf("strlwr:%s",strlwr(s3));
	printf("\n strupper:%s",strupr(s4));
	strcat(s3,s4);
	printf("\n s3=:%s",s3);
	printf("\n s4=:%s",s4);
	char s5[50]="university";
	strrev(s5);
	printf("\n s5=%s",s5);
}
