#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
    /* data */
};
struct que
{
    struct node *front;
    struct node *rear;
    /* data */
};
int main()
{
    struct que a;
    struct que *q=&a;
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    t->data=2;
    t->link=NULL;
    q->rear->link=t;
    q->rear=q->rear->link;
    printf("value of node by t is %d\n",t->data);
    printf("value of t by q is %d\n",q->rear->data);
    printf("link of t is %d\n",t->link);
    printf("link of r is %d\n",q->rear->link);
    t->data=4;
    t->link=NULL;
    q->rear->link=t;
    q->rear=q->rear->link;
    printf("\n\n");
    printf("value of node by t is %d\n",t->data);
    printf("value of t by q is %d\n",q->rear->data);
    printf("link of t is %d\n",t->link);
    printf("link of r is %d\n",q->rear->link);
    t->data=6;
    t->link=NULL;
    q->rear->link=t;
    q->rear=q->rear->link;
    printf("\n\n");
    printf("value of node by t is %d\n",t->data);
    printf("value of t by q is %d\n",q->rear->data);
    printf("link of t is %d\n",t->link);
    printf("link of r is %d\n",q->rear->link);
}