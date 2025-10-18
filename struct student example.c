#include<stdio.h>
struct student
{
	char name[15];
	int rno;
	char gender;
};
int main()
{
	struct student s1={"srinu",143,'m'},s2;
	s2=s1;
	printf("student details are");
	printf("name=%s\nrno=%d\ngender=%c",s2.name,s2.rno,s2.gender);	
}
