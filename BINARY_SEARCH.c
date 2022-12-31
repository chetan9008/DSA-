#include <stdio.h>
#include <stdlib.h>
#define MAX 10// TIME COMPLEXITY OF THIS PROGRAM IS O(log2baseN)
void display(int *arr)
{
    for (int i = 0; i < MAX; i++)
        printf("%d\n", arr[i]);
}
int main()
{
    int *arr;
    arr = (int *)malloc(MAX*sizeof(int));
    for (int i = 0; i < MAX; i++)
    {
        printf("Enter [%d] element:", i);
        scanf("%d", &arr[i]);
    }
    int mid,low=0,upper=MAX-1,flag=1,n;
    printf("enter the no to search:");
    scanf("%d",&n);
    for(mid=(low+upper)/2;low<=upper;mid=(low+upper)/2)
    {
        if(arr[mid]==n)
        {
            printf("%d is at %d location",n,mid);
            flag=0;
        }
        if(arr[mid]>n)
        upper=mid-1;
        else
        low=mid+1;
    }
    if(flag)
    printf("%d is not found in the list\n",n);
}