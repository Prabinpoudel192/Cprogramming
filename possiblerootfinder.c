#include<stdio.h>
#include<math.h>
int main()
{

float a,b,c,k,l,m,n,o,r,s;
printf("Please Enter the value of a:\n");
scanf("%f",&a);
printf("Please Enter the value of b:\n");
scanf("%f",&b);
printf("Please Enter the value of c:\n");
scanf("%f",&c);
k=pow(b,2)-(4*a*c);
if(k>0)
{
l=sqrt(k);
m=(-b+l)/(2*a*c);
n=(-b-l)/(2*a*c);
printf("The possible root of quadatric equation is\nRoot1= %2f\nRoot2=%2f.\n",m,n);
}
else
{
s=k/-1;
l=sqrt(s);
o=-b/(2*a*c);
r=l/(2*a*c);

printf("The possible roots are\n Root1=%2f+%2fi\nRoot2=%2f-%2fi.\n",o,r,o,r);
}
return 0;
}



