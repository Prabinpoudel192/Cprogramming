#include<stdio.h>
struct student {
    char name[20][5];
    int age[3] ;
    float salary[3] ;
};
int main()
{
int i;
struct student s[5];
for(i=0;i<5;i++)
{

printf("Please enter the name of student %d:\n",i+1);
getchar();
scanf("%[^\n]",s[i].name);
printf("Please enter the age of student %d:\n",i+1);
scanf("%d",&s[i].age);
printf("Please enter the salary of the student %d:\n",i+1);
scanf("%f",&s[i].salary);
} 
printf("The detail will be displayed below:\n");
for(i=0;i<5;i++)
{
    printf("Student name=%s\n",s[i].name);
    printf("Age=%d\n",s[i].age);
    printf("salary=%f\n",s[i].salary);
    printf("\n\n\n");
}

return 0;



}
