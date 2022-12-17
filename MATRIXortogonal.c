#include <stdio.h>
#define MAX 2
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
int display(int a[3][3])
{
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
int trans(int a[3][3], int t[3][3])
{
    int i, j;
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            t[i][j] = a[j][i];
        }
    }
}
int orto(int a[3][3],int t[3][3])
{
    int c[3][3],i;
trans(a,t);
mul(a,t,c);
for(i=0;i<MAX;i++)
{
    if(c[i][i]==1)
    continue;
    else
    break;
}
if(i==MAX)
return 1;
else
return 0;
}
int main()
{
    int arr[3][3];
    int t[3][3];
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            printf("enter [%d][%d] element:", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    display(arr);
    int r=orto(arr,t);
    if(r==1)
    printf("given matrix is ortogonal matrix\n");
}