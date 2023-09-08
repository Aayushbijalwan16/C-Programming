#include<stdio.h>
#include<conio.h>
void main()
{
int num,a,b,c,d,e,n;
clrscr();
printf("enter 5 no");
scanf("%d",&n);
e=n%10;
n=n/10;
d=n%10;
n=n/10;
c=n%10;
n=n/10;
b=n%10;
n=n/10;
a=n%10;
n=n/10;
num=a+b+c+d+e;
printf("Sum of five numb is%d",num);
getch();
}