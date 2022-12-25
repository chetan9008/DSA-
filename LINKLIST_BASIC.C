#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
void del(struct node **q, int n)
{
    struct node *t, *old;
    t = *q;
    if (*q == NULL)
    printf("LINK LIST IS EMPTY\n");
    while(t!=NULL)
    {
        if(t->data==n)
        {
            if(t==*q)
            *q=t->link;
            else
            old->link=t->link;
            free(t);
            return;
        }
        else
        {
            old=t;
            t=t->link;
        }
    }
    printf("%d is not found in list\n",n);
}
void addspec(struct node *q, int loc, int n)
{
    struct node *t, *r;
    int i = 0;
    t = q;
    for (; i < loc; i++)
    {
        t = t->link;
        if (t == NULL)
        {
            printf("There are less than %d elements in list", loc);
        }
    }
    r = (struct node *)malloc(sizeof(struct node));
    r->data = n;
    r->link = t->link;
    t->link = r;
}
void addatbeg(struct node **q, int n)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    t->data = n;
    t->link = *q;
    *q = t;
}
void display(struct node *q)
{
    while (q != NULL)
    {
        printf("%d  ", q->data);
        q = q->link;
    }
    printf("\n\n");
}
int count(struct node *q)
{
    int c = 0;
    while (q != NULL)
    {
        q = q->link;
        c++;
    }
    return c;
}
void append(struct node **q, int n)
{
    struct node *t, *r;
    if (*q == NULL)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = n;
        t->link = NULL;
        *q = t;
    }
    else
    {
        t = *q;
        while (t->link != NULL)
            t = t->link;
        r = (struct node *)malloc(sizeof(struct node));
        r->data = n;
        r->link = NULL;
        t->link = r;
    }
}
int main()
{
    struct node *p;
    p = NULL;
    append(&p, 4);
    append(&p, 5);
    append(&p, 6);
    append(&p, 7);
    append(&p, 8);
    printf("No of linklist is %d\n\n", count(p));
    printf("Elements in linklist are:\n");
    display(p);
    addatbeg(&p, 9);
    display(p);
    printf("No of linklist is %d\n\n", count(p));
    addspec(p, 1, 11);
    addspec(p, 6, 12);
    display(p);
    del(&p, 12);
    del(&p,6);
    del(&p,9);
    del(&p,0);
    display(p);
}
