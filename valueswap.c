#include<stdio.h>
int main()
{
int a,b;
printf("Please enter the value of a:\n");
scanf("%d",&a);
printf("Please enter the value of b:\n");
scanf("%d",&b);

printf("The value before swap is a=%d and b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("Value after swap is a=%d and b=%d",a,b);
return 0;
}
