#include<stdio.h>
#include<string.h>
struct pr{
    int id;
    char name[20];
    char book_name[20];
};
int main()
{
    struct pr s[5];
    int i;
        for(i=0;i<2;i++)
   {
    printf("Please enter the id number:\n");
    scanf("%d",&s[i].id);
    printf("Please enter the Name:\n");
    scanf("%s",s[i].name);
    printf("Please enter the book name:\n");
    scanf("%s",s[i].book_name);
    }
    system("cls");

     for(i=0;i<2;i++)
   {
    printf("ID: %d\n",s[i].id);
    
    printf("Name:%s\n",s[i].name);
    
    printf("Book Name:%s\n",s[i].book_name);
    printf("\n\n");
    
    }
return 0;
}
