/*In this first element is selected and compare to 
all elements in array and if the selected element 
greater than any element than it swap it 
This process doen till all the elements in array 
is sorted.*/
#include<stdio.h>
int main()
{
    int i,j,p,t;
    int arr[5]={10,3,5,2,1};
    for(int i=0;i<5;i++)
    {
        p=arr[i];
        for(int j=i+1;j<5;j++)
        {
            if(p>arr[j])
            {
                t=p;
                p=arr[j];
                arr[j]=t;
            }
        }
        arr[i]=p;
    }
for(int i=0;i<5;i++)
{
    printf("%d\n",arr[i]);
}
}