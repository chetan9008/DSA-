#include<stdio.h>
#define MAX 5
void display(int *arr)//Big O of this program is O(n^2)
{
    for(int i=0;i<MAX;i++)
    printf("%d\n",arr[i]);
}
int main()
{
    int t,key=0,i,j,k;
    int arr[MAX]={9,8,6,5,4};
    for(i=1;i<MAX;i++)
    {
        if(arr[key]>arr[i])
        for(j=key,k=i;j<i;j++,k--)
        {
            t=arr[k-1];
            arr[k-1]=arr[k];
            arr[k]=t;
        }
    }
    display(arr);
}
