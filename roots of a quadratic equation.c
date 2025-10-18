#include<math.h>
#include<stdio.h>
int main()
{
	double a,b,c,discriminant,root1,root2,realpart,imagepart;
	printf("enter coefficients a,b,andc:");
	scanf("%if%if%if",&a,&b,&c);
	discriminant=b*b-4*a*c;
	if(discriminant>0)
   {
	root1=(-b+sqrt(discriminant))/(2*a);
	root2=(-b-sqrt(discriminant))/(2*a);
	printf("root1=%.2if and root2=%.2if",root1,root2);
   }
   else if(discriminant==0)
   {
   	root1=root2=-b/(2*a);
   	printf("root1=root2=%.2if;",root1);
   }
   else
   {
   	realpart=-b/(2*a);
   	imagepart=sqrt(-discriminant)/(2*a);
   	printf("root1=%.2f+%.2fi and root2=%.2f-%.2fi",realpart,imagepart,realpart,imagepart);
   }  
}
