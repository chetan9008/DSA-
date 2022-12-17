#include<stdio.h>
int shorting(int a[])
{
    int t;
    int k;
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
          if(a[i]>a[j])
          {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
          }  
        }
    }
     for(k=0;k<5;k++)
            {
                printf("%d\n",a[k]);
            }
}
int main()
{
    int arr[5]={37,5,42,34,41};
    shorting(&arr[0]);
    return 0;
}