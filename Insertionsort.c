#include<stdio.h>
int main()
{
    int arr[9]={2,32,45,67,89,4,3,8,10};
    int t;
    for(int i=1;i<9;i++)
    {
        for(int j=i;j>=0&&arr[j-1]>arr[j];j--)
        {
            t=arr[j];
           arr[j]=arr[j-1];
           arr[j-1]=t;
        }
        printf("i is there\n");
    }
    for(int i=0;i<9;i++)
    {
        printf("%d\n",arr[i]);
    }
}