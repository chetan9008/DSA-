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
        printf("%d ",q->data);
        q=q->link;
    }
    printf("\n");
}
void deletion(struct node **q,int loc)
{
    struct node *temp=*q,*old;
    if(loc==1)
    {
    *q=(*q)->link;
    free(temp);
    }
    else
    {
    for(int i=1;i<loc;i++)
    {
        old=temp;
        temp=temp->link;
    }
    old->link=temp->link;
    free(temp);
    }
}
void inend(struct node *q,int n)
{
    struct node *temp=q,*r;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    r=(struct node *)malloc(sizeof(struct node ));
    r->data=n;
    r->link=NULL;
    temp->link=r;
}
void inspec(struct node *q,int n,int loc)
{
    struct node *temp=q,*r;
    for(int i=1;i<loc;i++)
    {
        temp=temp->link;
    }
    r=(struct node *)malloc(sizeof(struct node ));
    r->data=n;
    r->link=temp->link;
    temp->link=r;
}
void frontin(struct node **q,int n)
{
    struct node *temp=*q;
    *q=(struct node *)malloc(sizeof(struct node ));
    (*q)->data=n;
    (*q)->link=temp;
}
void initially(struct node **q,int n)
{
    struct node *temp=*q;
    if(*q==NULL)
    {
        temp=(struct node *)malloc(sizeof(struct node ));
        *q=temp;
    }
    else
    {
        while(temp->link!=NULL)
        temp=temp->link;
        temp->link=(struct node *)malloc(sizeof(struct node));
        temp=temp->link;
    }
    temp->data=n;
    temp->link=NULL;
}
int main()
{
    struct node *p=NULL;
    initially(&p,1);
    initially(&p,2);
    initially(&p,3);
    initially(&p,4);
    initially(&p,5);
    frontin(&p,11);
    inspec(p,33,5);
    inend(p,77);
    display(p);
    deletion(&p,1);
    deletion(&p,3);
    deletion(&p,6);
    display(p);
}