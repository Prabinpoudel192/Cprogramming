 #include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d,rem,val=0; 
printf("Please enter the value you want to check:\n");
scanf("%d",&a);
b=a;
while(b>0)
{
b=b/10;
c++;
}
d=a;
while(d>0)
{
rem=d%10;
val=val+pow(rem,c);
d=d/10;
}
printf("The armstrong value is %d.\n",val);
if(val==a)
printf("The number is Armstrong.\n");
else
printf("The number is not Armstrong.\n");
return 0;
}
