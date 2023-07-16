#include<stdio.h>
#include<stdlib.h>
__struct_FILE_defined{
    char name[20][5];
    int age[5];
}
int main()
{

 FILE *fp;
char st;
fp=fopen("abc.txt","a+");
if (fp==NULL)
{
    printf("file not opened");
    exit(1);

}
for(i=0;i<5;i++)
{
printf("Please enter the name of Student %d",i+1);
fflush(stdin);
fscanf("%[^\n]",&s.name[i]);
printf("Please enter the age of student %d",i+1);
fscanf("%[^\n]",&age[i]);
}
for(i=0;i<5;i++)
{
    st = fgetc(fp);
    printf("%c",st);

}

    fclose(fp);
    return 0;
}
