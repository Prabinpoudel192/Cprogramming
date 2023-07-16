#include<stdio.h>
#include<windows.h>

int main()
{
   int n,a=0,i,l,k,m,j,b;
   COORD c;

printf("Please Enter the Value you want to convert:\n");
scanf("%d",&n);
printf("The Hexadecimal value is Equal to:\n");
l=n;
while(l>0)
{
    l=l/16;
    a++;
}
j=n;
b=a;
for(i=1;i<=a;i++)
{
c.X=b;
c.Y=4;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
k=j%16;
if(k>9)
    printf("%c",55+k);
else
    printf("%d",k);
m=j/16;
j=m;
b--;
}
return 0;
}