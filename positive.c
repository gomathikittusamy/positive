#include<stdio.h>
#include<conio.h>
void main()
{
int ch,n;
float n1;
double n2;
clrscr();
printf("enter your choice\n");
printf("1.float\n");
printf("2.int\n");
printf("3.double\n");
printf("4.exit");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter the floating point number");
scanf("%f",&n1);
if(n1!=0)
{
if(n1>0.0)
printf("postive");
else
printf("negative");
}
else
printf("you enter the Zero");
break;
case 2:
printf("enter the integer number");
scanf("%d",&n);
if(n!=0)
{
if(n>0)
printf("postive");
else
printf("negative");
}
else
printf("you enter the Zero");
break;
case 3:
if(n2!=0)
{
if(n2>0.0)
printf("postive");
else
printf("negative");
}
else
printf("you enter the ZERO");
break;
case 4:
printf("exit");
break;
default:
printf("please enter the choice given up");
break;
}
getch();
}
