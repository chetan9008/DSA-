#include<stdio.h>
#define n 5
void display(int *arr)//Big O of this program is O(n^2)
{
    for(int i=0;i<n;i++)
    printf("%d\n",arr[i]);
}
int main()
{
    int arr[n]={5,4,3,2,1};
    int key=0,i,j,k,t;
for(int i=1;i<n;i++)
{
    if(arr[key]>arr[i])
    {
        for(int j=key,k=i;j<i;j++,k--)
        {
            t=arr[k-1];
            arr[k-1]=arr[k];
            arr[k]=t;
        }
    }
}
    display(arr);
}