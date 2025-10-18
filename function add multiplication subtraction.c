#include<stdio.h>

void addition();
void mul();
void sub();

int main()
{
    printf("start");
    addition();
    mul();
    sub();
    printf("\nend");
}

void addition()
{
    int a = 10, b = 5;
    printf("\n%d", a + b);
}

void mul()
{
    int a = 10, b = 5;
    printf("\n%d", a * b);
}

void sub()
{
    int a = 10, b = 5;
    printf("\n%d", a - b);
}

