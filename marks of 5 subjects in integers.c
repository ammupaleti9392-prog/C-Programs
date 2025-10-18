#include<stdio.h>
int main()
{
	int english,maths,science,psychology,history,total;
	float average;
	printf("enter the marks of english,maths,science,psychology and history:\n");
	scanf("%d %d %d %d %d",&english,&maths,&science,&psychology,&history);
	total=english+maths+science+psychology+history;
	average=total/5.0;
	printf("total marks of the students:%d\n",total);
	printf("average marks of the student:%.2f\n",average);
}
