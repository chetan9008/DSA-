#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void add(struct node **f,struct node **r,int n)
{
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    t->data=n;
    if(*f==NULL)
    *f=t;
    else
    (*r)->link=t;
    *r=t;
    (*r)->link=*f;
}
void del(struct node **f,struct node **r)
{
    struct node *t;
    if(*f==NULL)
    {
    printf("UNDER FLOW\n");
    return;
    }
    if(*f==*r)
    {
        printf("Deleted element is %d\n",(*f)->data);
        t=*f;
        *f=NULL;
        *r=NULL;
        free(t);
    }
    else
    {
        printf("Deleted element is %d\n",(*f)->data);
        t=*f;
        *f=(*f)->link;
        (*r)->link=*f;
        free(t);
    }
}
void display(struct node *f,struct node *r)
{
    struct node *q,*p;
    q=f,p=NULL;
    if(f==NULL)
    printf("No element in list\n");
    while(q!=p)
    {
    printf("%d\n",q->data);
    q=q->link;
    p=f;
    }
}
int main()
{
    struct node *front,*rear;
    front=rear=NULL;
    add(&front,&rear,10);
    add(&front,&rear,11);
    add(&front,&rear,12);
    add(&front,&rear,13);
    add(&front,&rear,14);
    display(front,rear);
    del(&front,&rear);
    del(&front,&rear);
    del(&front,&rear);
    display(front,rear);
}