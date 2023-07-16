#include<stdio.h>
#include<windows.h>
int main()
{

int a[3][3],b[3][3],prod[3][3],i,j,k;
  COORD c;
//Taking the value of matrix A and B.
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("Please enter the value of martix A place %d%d:\n",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("Please enter the value of martix B place %d%d:\n",i+1,j+1);
        scanf("%d",&b[i][j]);
    }
}
system("cls");
//Multiplying the Two matrix
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
    prod[i][j]=0;
     for(k=0;k<3;k++)
    {
     prod[i][j]=prod[i][j]+a[i][k]*b[k][j];

    }
    }
}
//Printing the value of matrix A.

for(i=0;i<3;i++)
{
    if(i==1)
    {
        printf("(A X B)=");
    }
    else
    {
    }
c.Y=i+1;
 c.X=9;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
printf("|");
    for(j=0;j<3;j++)
    {
        c.X=(j+5)*2;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
        printf("%d",a[i][j]);
    }
printf("|");
    printf("\n");
}
c.Y=2;
c.X=17;

 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
 printf("X");
//Printing the value of matrix B.
for(i=0;i<3;i++)
{
    c.Y=i+1;
    c.X=19;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
    printf("|");
    for(j=0;j<3;j++)
    {
          c.X=(j+10)*2;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
        printf("%d",b[i][j]);
    }
    printf("|");
    printf("\n");
}
//printing the value of multiplied matrix.
for(i=0;i<3;i++)
{
    if(i==1)
    {
        c.Y=6;
        c.X=7;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
        printf("=");
    }
    else{}
     c.Y=(i+5);
        c.X=8;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
     printf("|");
    for(j=0;j<3;j++)
    {
               c.X=(j+3)*3;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
        printf("%d",prod[i][j]);
    }
     printf("|");
    printf("\n");
}
printf("\nThis Program was created by The Mr.Prabin Poudel.\n");
return 0;
}
