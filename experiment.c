#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void display(struct node *q)
{
    while(q!=NULL)
    {
        printf("%d  ",q->data);
        q=q->link;
    }
    printf("\n\n");
}
void *append(struct node *q,int n)
{
    struct node *t,*r;
    if(q==NULL)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=n;
        t->link=NULL;
        q=t;
    }
    return q;
}
int main()
{
    struct node *p;
    p=NULL;
    p=append(p,2);
    printf("elements are:\n");
    display(p);
}