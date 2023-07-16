#include<stdio.h>
#include<math.h>
#define pi 3.142857143
int main()
{
float area,r,k;
printf("Please enter the value of radious:\n");
scanf("%f",&r);
k=pow(r,2);
area=pi*k;
printf("The Value of area of circle is %f.\n",area);
return 0;
}


