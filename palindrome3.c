#include<stdio.h>
#include<math.h>
int main()
{
int a,n,l=0,base,rem,j=0; 

printf("Please Enter the value you want to check:\n");
scanf("%d",&a);
n=a;
while(n>0)
{
n=n/10;
l++;
}
base=pow(10,l);
n=a;
while(n>0)
{
base=base/10;
rem=n%10;
j=j+(base*rem);
n=n/10;
}
printf("The reversed value of entered number is %d\n",j);
if(j==a)
printf("The number you have entered is palindrome.\n");
else
printf("The number you have entered is notpalindrome.\n");
return 0;
}


