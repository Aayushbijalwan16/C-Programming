#include<stdio.h>
#include<conio.h>
void main()
{
int a,i;
clrscr();
printf("Enter the mark");
scanf("%d",&a);
do{
	if(a>=90 && a<=100)
	{
	 printf("This is good");
	}else
	 if(a>=60 && a<=89)
	{
	 printf("This ia also good");
	}else if(a>=59)
	{
	 printf("This is good as well marks does't matter");
	}else
	{
	printf("Invalid No.\n");
	}
	printf("Want to continue for yes press 1 and for no press 0\n");
	scanf("%d",&i);
	printf("Enter mark again\n");
	scanf("%d",a);
       }while(i==1);
getch();
}