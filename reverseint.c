#include <stdio.h>
#include <math.h>
int l = 0;

int reverse(int);

int main()
{
    int a;
    printf("Please enter an integer:\n");
    scanf("%d", &a);
     int s = a;
    while (s > 0) {
        s = s / 10;
        l++;
    }
    printf("The reverse of the integer is %d.\n", reverse(a));
    return 0;
}

int reverse(int a) {
    if (a < 10) {
        return a;
    } else {
        l--;
        return (((a%10) * pow(10,l))+reverse(a / 10));
    }
}
