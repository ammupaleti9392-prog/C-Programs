#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("bitwise operator:\n");
	printf("bitwise and (&)\n%d&%d=%d\n",a,b,a&b);
	printf("bitwise or(|)\n%d|%d=%d\n",a,b,a|b);
	printf("bitwise or(^)\n%d^%d=%d\n",a,b,a^b);
	printf("left shift(<<)\n%d<<%d=%d\n",a,b,a<<b);
	printf("right shift(>>)\n%d>>%d=%d\n",a,b,a>>b);
}
