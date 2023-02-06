#include<stdio.h>
int max=10;
void deletion(int *arr)
{
    for(int i=0;i<max;i++)
    {
        for(int j=i+1;j<max;j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j;k<max;k++)
                arr[k]=arr[k+1];

                max--;

                j--;
            }
        }
    }
}
void display(int *arr)
{
    printf("\n");
    for(int i=0;i<max;i++)
    printf("%d  ",arr[i]);
}
int main()
{
    int arr[10]={1,2,3,4,4,5,6,7,8,8};
    display(arr);
    deletion(arr);
    display(arr);
}