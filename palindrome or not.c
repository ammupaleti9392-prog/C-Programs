#include<stdio.h>
#include<math.h>
int main()
{
	int originalnumber,reversenumber=0,tempnumber;
	printf("enter a number:");
	scanf("%d",&originalnumber);
	tempnumber=originalnumber;
	while(tempnumber)
	{
	 int cur_digit=tempnumber%10;
	 reversenumber=reversenumber*10+cur_digit;
	 tempnumber=tempnumber/10;
	}
	if(originalnumber==reversenumber)printf("palindrome");
	else printf("not a palindrome");
}
