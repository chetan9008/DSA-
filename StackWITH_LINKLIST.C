#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void display(struct node **top)
{
    struct node *temp;
    temp=*top;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        printf("%d\n",temp->link);
        temp=temp->link;
    }
    printf("\n");
}
void del(struct node **top)
{
    struct node *temp;
    while(*top!=NULL)
    {
        temp=*top;
        *top=(*top)->link;
        free(temp);
    }
    if(*top==NULL)
    printf("ALL ELEMENTS ARE DELETED\n");
}
void pop(struct node **top)
{
    struct node *temp;
    if(*top==NULL)
    printf("UNDERFLOW\n");
    temp=*top;
    printf("POPPED elment :  %d\n",temp->data);
    (*top)=(*top)->link;
    free(temp);
}
void push(struct node **top,int n)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("OVERFLOW\n");
        return;
    }
    temp->data=n;
    temp->link=*top;
    *top=temp;
}
int main()
{
    struct node *s=NULL;
    push(&s,4);
    push(&s,5);
    push(&s,6);
    push(&s,7);
    push(&s,8);
    display(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    display(&s);
    // pop(&s);
    // pop(&s);
    // pop(&s);
    // del(&s);
    // display(&s);  
}
