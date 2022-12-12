#include <stdio.h>
#define MAX 3
void tran(int a[3][3],int b[3][3])
{
    int i,j;
    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
           b[i][j]=a[j][i];
        }
    }
}
void mul(int a[3][3],int b[3][3],int c[3][3])
{
    int i,j,k;
    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            c[i][j]=0;
            for(k=0;k<MAX;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}
void add(int a[3][3],int b[3][3],int c[3][3])
{
    int i,j;
    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
}
void display(int arr[3][3])
{
    int i, j;
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
           printf("%d\t",arr[i][j]);
        }
        printf("\n");
    } 
}
void enter(int arr[3][3])
{
    int i, j;
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            printf("enter [%d][%d] element:", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr1[3][3],
        arr2[3][3],
        arr3[3][3],
        arr4[3][3],
        arr5[3][3];
    printf("enter elements for 1st array\n");
    enter(arr1);
    printf("enter elements for 2nd array\n");
    enter(arr2);
    add(arr1,arr2,arr3);
    mul(arr1,arr2,arr4);
    tran(arr1,arr5);
    printf("1st array is \n");
    display(arr1);
    printf("2nd array is \n");
    display(arr2);
    printf("ADDITION OF TWO MATIRIX IS\n");
    display(arr3);
    printf("MULTIPLICATION OF TWO MATIRIX IS\n");
    display(arr4);
    printf("TRANSPOSE OF A MATIRIX IS\n");
    display(arr5);
}