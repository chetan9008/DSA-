#include<stdio.h>
int main()
{
    struct ex
    {
    int cof;
    int exp;
    };
    struct term
    {
        struct ex t[10];
    };
    
    struct term *ptr;
    for(int i=0;i<3;i++)
    {
        printf("enter coff and expre\n");
        scanf("%d%d",&ptr->t[i].cof,&ptr->t[i].exp);
    }
    for(int i=0;i<3;i++)
    {
        printf("%dX^%d\t",ptr->t[i].cof,ptr->t[i].exp);
    }
    return 0;
} 
