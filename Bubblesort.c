//In this first element and second element compare
//with each other if first element is greater than 
//second element than swap it and this happens to 
//thrid and fourth elements and then swap and this
//happens till all the elements will not be sorted. 
#include<stdio.h>
int main()
{
    int arr[5]={34,11,56,22,65};
    int t;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
}