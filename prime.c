#include<stdio.h>
void prime(int);
int main()
{
int a;
prime(a);
return 0;
}
void prime(int a)
{
int b,c=0,count,num=1,cou=0,i;
printf("Please enter how many prime number you want to find:\n");
scanf("%d",&b);
while(c<=b)
{
    num++;
    for(i=0;i<num;i++)
    {
        count=num%i;
        cou=0;
        if(count==0)
        {
            cou++;
        }
        else{}
    }
    if(cou==2)
    {
        c++;
        printf("%d ",num);
    }
}


}