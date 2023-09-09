#include<stdio.h>
#include<conio.h>
void main()
{
int a[5]={10,20,30,40,50},i=0,item;
clrscr();
printf("Input Seatching item");
scanf("%d",&item);
while(i<5)
{
if (a[i]==item)
{
printf("item found location");
break;
}
i++;
}
if(i>=5)
printf("item not found");
getch();
}