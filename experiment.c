#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void delete(struct node **f, struct node **r)
{
    if(*f==NULL)
    {
        printf("Underflow\n");
    }
    struct node *temp;
    if (*f == *r)
    {
        temp = *f;
        *f = NULL;
        *r = NULL;
        free(temp);
    }
    else
    {
        temp = *f;
        *f = (*f)->link;
        (*r)->link = temp->link;
        free(temp);
    }
}
void display(struct node *f, struct node *r)
{
    if(f==NULL)
    printf("List is empty\n");
    struct node *q, *p;
    q = f, p = NULL;
    while (q != p)
    {
        printf("%d   ", q->data);
        q = q->link;
        p = f;
    }
    printf("\n");
}
void insert(struct node **f, struct node **r, int n)
{
    struct node *temp;
    if (((*f) == NULL) && ((*r) == NULL))
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = n;
        temp->link = NULL;
        *f = *r = temp;
    }
    else
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = n;
        temp->link = *f;
        (*r)->link = temp;
        (*r) = temp;
    }
}
int main()
{
    struct node *front, *rear;
    front = rear = NULL;
    insert(&front, &rear, 1);
    insert(&front, &rear, 2);
    insert(&front, &rear, 3);
    insert(&front, &rear, 4);
    display(front,rear);
    delete(&front,&rear);
    delete(&front,&rear);
    delete(&front,&rear);
    delete(&front,&rear);
    display(front,rear);
    delete(&front,&rear);
    return 0;
}