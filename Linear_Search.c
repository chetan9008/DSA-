#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void search(int *arr,int n)
{
    int i=0;
    for(;i<MAX;i++)
    {
        if(arr[i]==n)
        {
            printf("%d is at %d location\n",n,i);
            exit(0);
        }
    }
    if(i==MAX)
    printf("%d is not found in the list \n",n);
}
int main()
{
    int arr[10]={22,28,18,33,81,11,19,46,77,99};
    int s;
    printf("enter the element for searching:");
    scanf("%d",&s);
    search(arr,s);
    return 0;
}