#include<stdio.h>
#define MAX 5
int top=-1;
int a[MAX];//This will be the array in which we will implement all the operations.



int isempty()
{
    if(top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(){
if(top==MAX-1)
{
    return 1;
}
else{
    return 0;
}}
void push(int data)
{
    if(isfull())
    {
        printf("The stack is full.\n");
    }
    else{
        top++;
        a[top]=data;
        printf("Pushed data is %d.\n",data);
    }
}
void peek()
{
    if(isempty())
    {
        printf("The stack is empty.\n");
    }
    else{
        printf("The data of top of the stack is %d.\n",a[top]);
    }
}
void pop()
{
    if(isempty())
    {
        printf("There is no data to pop.\n");
    }
    else{
        top--;
        printf("Popped data is %d.\n",a[top+1]);
    }
}
void display(){
if(isempty())
{
    printf("There is no data in the stack.\n");
}
else{
    printf("The data in the stack will be displayed below.\n");
    for(int i=0;i<=top;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
}
int main(){
push(18);
peek();
push(11);
peek();
push(9);
peek();
push(7);
peek();
push(6);
peek();
push(13);
peek();
pop();
peek();
pop();
peek();
display();
}