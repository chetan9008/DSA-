#include<stdio.h>
void add(int *p,int *q)
{
    int c;
//     for(int i=0;i<10;i++)
// {
    if(*p==*q)
    {
        *p=3,*q=4;
        return;
    }
    *p=5,*q=6;
// }
}
int main()
{
    int p,q;
    p=2,q=2;
    add(&p,&q);
    printf("value of p and q is %d and %d",p,q);
}