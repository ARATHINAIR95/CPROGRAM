#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,temp;
clrscr();
printf("enter the first number");
scanf("%d",&a);
printf("enter the second number");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("the swapping numbers:",a,b);
getch();
}


