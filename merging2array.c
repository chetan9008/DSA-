#include <stdio.h>
#include <stdlib.h>
#define MAX1 5
#define MAX2 7
int *arr;
int *merge(int *a,int *b)
{
    int i,j,k,*arr;
    int size=MAX1+MAX2;
    arr=(int *)malloc(size*sizeof(int));
    for(i=0,j=0,k=0;i<size;i++)
    {
        if(a[k]<b[j])
        {
            arr[i]=a[k];
            k++;
            if(k>=MAX1)
            {
                for(i++;j<MAX2;j++,i++)
                {
                    arr[i]=b[j];
                }
            }
        }
        else
        {
            arr[i]=b[j];
            j++;
            if(j>=MAX2)
            {
                for(i++;k<MAX1;k++,i++)
                arr[i]=a[k];
            }
        }
    }
    return arr;
}
int sort(int *arr,int size)
{
    int t;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
}
int display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int *create(int size)
{
    int *ptr;
    ptr = (int *)malloc(size * sizeof(int)); // dynamically allocation of memory
    for (int i = 0; i < size; i++)
    {
        printf("enter the [%d] element", i + 1);
        scanf("%d", &ptr[i]);
    }
    return ptr;
}
int main()
{
    int *a, *b,*c;
    printf("enter elements of 1st array\n");
    a = create(MAX1);
    printf("enter elements of 2nd array\n");
    b = create(MAX2);
    sort(a,MAX1);
    sort(b,MAX2);
    printf("1s array is:\n");
    display(a, MAX1);
    printf("2nd array is:\n");
    display(b,MAX2);
    c=merge(a,b);
    printf("Merged array is:\n");
    display(c,MAX1+MAX2);
    return 0;
}