#include<stdio.h>
#define MAX 5
void display(int *arr)
{
    for(int i=0;i<MAX;i++)
    printf("%d\n",arr[i]);
}
int main()
{
    int t;
    int arr[MAX]={22,99,1,2,88};
    for(int i=0;i<MAX-1;i++)
    {
        for(int j=0;j<MAX-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;      
            }
        }
    }
    display(arr);
}