#include <stdio.h>
#include <stdlib.h>
int split(int *arr,int low,int upper)
{
    int i,p,q,t;
    i=arr[low];
    p=low+1;
    q=upper;
    while(q>=p)
    {
        while(i>arr[p])
        p++;
        while(i<arr[q])
        q--;
        // printf("\nvalue of q is %d\n",q);
        if(q>p)
        {
            t=arr[p];
            arr[p]=arr[q];
            arr[q]=t;
        }
    }
    t=i;
    arr[low]=arr[q];
    arr[q]=t;
    return q;
}
void quick(int *arr,int low,int upper)
{
    int i;
    if(upper>low)
    {
        i=split(arr,low,upper);
        quick(arr,low,i-1);
        quick(arr,i+1,upper);
    }
}
int main()
{
    int arr[] = {11, 2, 9, 13, 57, 25, 17, 1, 90, 3};
    quick(arr,0,9);
    printf("SORTED LIST IS:\n");
    for(int i=0;i<10;i++)
    printf("%d\n",arr[i]);
}