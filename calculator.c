#include<stdio.h>
int main()
{
float a,b,c;
int ch;
printf("Please enter what you want to do?('1'for addition '2' for subtraction '3' for multiplication and '4' for division)\n");
scanf("%d",&ch);

switch(ch)
{
case 1:
printf("Please enter the value of a:\n");
scanf("%f",&a);
printf("Please enter the value of b:\n");
scanf("%f",&b);
c=a+b;
printf("The sum of the value entered is %f",c);
break;
case 2:
printf("Please enter the value of a:\n");
scanf("%f",&a);
printf("Please enter the value of b:\n");
scanf("%f",&b);

c=a-b;
printf("The difference of the value entered is %f",c);
break;
case 3:
printf("Please enter the value of a:\n");
scanf("%f",&a);
printf("Please enter the value of b:\n");
scanf("%f",&b);

c=a*b;
printf("The product of the value entered is %f",c);
break;
case 4:
printf("Please enter the value of a:\n");
scanf("%f",&a);
printf("Please enter the value of b:\n");
scanf("%f",&b);
c=a/b;
printf("The division of the value entered is %f",c);
break;
}

}


