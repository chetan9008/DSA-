#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int *)malloc(sizeof(int)*10);
    for(int i=0;i<10;i++)
    {
        printf("enter the [%d] element:",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",ptr[i]);
    }
    free(ptr);
    int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("enter the [%d] element:",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",ptr[i]);
    }

    return 0;  
}