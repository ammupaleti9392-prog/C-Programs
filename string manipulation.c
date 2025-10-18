#include<stdio.h>
int main()
{
	char arr[30],s1[10],s2[10],s3[10];
	int opt,i=0,j,len=0;
	printf("enter any option\n");
	printf("1:find out length of the string\n");
	printf("2:concatenate of the two string\n");
	printf("3:reverse of the string\n");
	printf("4:copy of the string\n");
	printf("enter the choice\n");
	scanf("%d",opt);
	switch(opt)
	{
		case1:
			{
				printf("enter any string\n");
				scanf("%[^\n]s",arr);
				for(i=0;arr[i]!='\0';i++);
				printf("the length of the string%d",i);
				break;
			}
		case2:
			{
				printf("string concatenation\n");
				printf("\nenter the first string:\n");
				scanf("%[^\n]s",s1);
				printf("\nenter second sring:\n");
				scanf("%[^\n]s",s2);
				for(i=0;s1[i]!='\0';i++)
			   {
					s3[i]=s1[i];
			   }
				s3[i]='\0';
				for(j=0;j<=i;j++);
				{
					s3[i+j]=s2[j];
				}
				printf("the concantenated string is %s",s3);
				break;
			}
			case3:
				{
					printf("reverse the string");
					printf("\nenter the string:");
					scanf("%[^\n]s",s1);
					while(s1[i]!='\0')
					{
						len=len+1;
						i++;
					}
					for(i=len-1;i>=0;i--)
					{
						printf("%c",s1[i]);
					}
					break;
				}
				case4:
					{
						printf("string copying\n");
						printf("enter 1st string:");
						scanf("%[^\n]s",s2);
						while(s2[i]!='\0')
						{
							s1[i]=s2[i];
							i++;
						}
							s1[i]='\0';
							printf("%s",s1);
							break;
					}
					default:
						{
							printf("Not is valid option........");
						}
	}
}
