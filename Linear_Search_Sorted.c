#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10,i;
    for(i=0;i<=9;i++)
    {
        if(arr[9]==n)
        {
            printf("element is at %d location",9);
            exit(0);
        }
        else
        {
            if(arr[i]==n)
            {
                printf("Element is found at %d location",i);
                exit(0);
            }
        }
    }
    if(i==10)
    printf("Element is not found");
    return 0;
}