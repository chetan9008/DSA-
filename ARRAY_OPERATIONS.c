#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int search(int *arr,int n)
{
    int i;
    for(i=0;i<MAX;i++)
    {
        if(arr[i]==n)
        {
        printf("%d is found at %d index\n",n,i);
        exit(0);
        }
    }
    if(i==MAX)
    printf("element is not found");
}
int rev(int *arr)
{
    int t;
    for(int i=0;i<MAX/2;i++)
    {
      t=arr[i];
      arr[i]=arr[MAX-1-i];
      arr[MAX-1-i]=t;
    }
}
int del(int *arr,int p)
{
    int i;
    for(i=p-1;i<MAX;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[i-1]=0;
}
int display(int *arr)
{
    for(int i=0;i<MAX;i++)
    printf("%d\n",arr[i]);
}
int insert(int *arr,int ps,int n)
{
    int i;
    for(i=MAX-1;i>=ps;i--)
    arr[i]=arr[i-1];
    arr[i]=n;
}
int main()
{
    int arr[5],s;
    printf("enter the element to search\n");
    scanf("%d",&s);
    insert(arr,1,1);
    insert(arr,2,2);
    insert(arr,3,3);
    insert(arr,4,4);
    insert(arr,5,5);
    display(arr);
    printf("array after deletion\n");
    del(arr,5);
    del(arr,1);
    display(arr);
    insert(arr,4,9);
    insert(arr,5,6);
    printf("array after insertion\n");
    display(arr);
    rev(arr);
    printf("array after reverting\n");
    display(arr);
    search(arr,s);
}
