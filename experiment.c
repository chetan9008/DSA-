#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
    /* data */
};
void display(struct node *q)
{
    while(q!=NULL)
    {
        printf("%d\n",q->data);
        q=q->link;
    }
}
void addatend(struct node *q,int n)
{
    struct node *temp;
    temp=q;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    struct node *r=(struct node *)malloc(sizeof(struct node));
    r->data=n;
    r->link=NULL;
    temp->link=r;
}
void addspec(struct node *q,int n,int loc)
{
    int i=1;
    struct node *temp=q;
    for(;i<loc;i++)
    {
        temp=temp->link;
    }
    struct node *r;
    r=(struct node *)malloc(sizeof(struct node));
    r->data=n;
    r->link=temp->link;
    temp->link=r;
}
void addatbeg(struct node **q,int n)
{
    struct node *t;
    if(*q==NULL)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=n;
        t->link=NULL;
        *q=t;
    }
    else
    {
    struct node *r=(struct node *)malloc(sizeof(struct node));
    r->link=*q;
    r->data=n;
    *q=r;
    }
}
int main()
{
    struct node *ptr = NULL;
    addatbeg(&ptr,2);
    addatbeg(&ptr,3);
    addspec(ptr,4,2);
    addspec(ptr,5,2);
    addatend(ptr,6);
    display(ptr);
}