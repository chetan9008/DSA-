#include <stdio.h>
#define MAX 5
void display(int *arr)
{
    for (int i = 0; i < MAX; i++)
        printf("%d\n", arr[i]);
}
int main()
{
    int t;
    int arr[5] = {9,8,6,5,4};
    for(int i=0;i<MAX-1;i++)
    {
        for(int j=i+1;j<MAX;j++)
        {
            if(arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    display(arr);
}