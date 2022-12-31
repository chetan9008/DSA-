#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct queue
{
    struct node *front;
    struct node *rear;
};
void addq(struct queue *q,int item)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    printf("queue is full");
    temp->data=item;
    temp->link=NULL;
    if(q->front==NULL)
    {
        q->rear=q->front=temp;
        return;
    }
    q->rear->link=temp;
    q->rear=q->rear->link;
    printf("%d\n",q->rear->link);
    printf("%d\n",q->rear->data);
}

int main()
{struct queue a;
int i;
addq(&a,11);
addq(&a,-8);
addq(&a,-8);
addq(&a,-8);
addq(&a,-8);
}