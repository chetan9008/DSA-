#include<stdio.h>
#define MAX 5
void display(int *arr,int *t)
{
    for (int i=*t;i>=0;i--)
    {
        printf(" %d\n",arr[i]);
        printf("----\n");
    }
printf("\n\n"); 
}
void pop(int *arr,int *t)
{
    if(*t==-1)
    {
        printf("UNDERFLOW\n");
        return;
    }
    printf("Deleted Element is %d\n",arr[*t]);
    (*t)--;
}
void push(int *arr,int *t,int n)
{
    if(*t==MAX-1)
    {
        printf("OVERFLOW\n");
        return;
    }
    (*t)++;
    arr[*t]=n;
}
int main()
{
    int arr[5];
    int top=-1;

    push(arr,&top,2);
    push(arr,&top,4);
    push(arr,&top,6);
    display(arr,&top);
    push(arr,&top,8);
    push(arr,&top,10);
    display(arr,&top);
    push(arr,&top,12);
    //pop function
    pop(arr,&top);
    pop(arr,&top);
    display(arr,&top);
    pop(arr,&top);
    pop(arr,&top);
    display(arr,&top);
    pop(arr,&top);
    pop(arr,&top);
    
}