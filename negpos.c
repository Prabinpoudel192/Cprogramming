#include<stdio.h>
int main()
{
 int a,b,c;
    printf("Please Enter the number you want to check:\n");
    scanf("%d",&a);
    if(a>0)
    printf("The number you have entered is positive.\n");
    else if(a<0)
    printf("The number you entered is negative number.\n");
    else
    printf("The number you entered is neither negative nor positive.\n");

    b=a%5;
    c=a%3;
    if(b==0 && c==0)
    printf("The number you have entered is divisible by both 5 and 3.\n");
    else
    printf("The number isnot divisible by both 5 and 3.\n");
    return 0;



}
