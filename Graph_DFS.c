#include <stdio.h>
#include <stdlib.h>
#define MAX 8
int visited[8];
struct node
{
    int data;
    struct node *link;
};
void del(struct node *q)
{
    struct node *t=q;
    while(q!=NULL)
    {
        printf("\nDeleted element is %d\n",t->data);
        t=q->link;
        free(q);
        q=t;
    }
}
void dfs(int v,struct node **a)
{
    struct node *q;
    visited[v-1]=1;
    printf("%d    ",v);
    q=*(a + v - 1);
    while(q!=NULL)
    {
        if(visited[q->data-1]==0)
        dfs(q->data,a);
        else
        q=q->link;
    }
}
void display(struct node *q)
{
    while (q != NULL)
    {
        printf("\n%d\t", q->data);
        q = q->link;
    }
}
struct node *createnode(int n)
{
    struct node *q;
    q = (struct node *)malloc(sizeof(struct node));
    q->data = n;
    return q;
}
int main()
{
    struct node *arr[MAX];
    struct node *v1, *v2, *v3, *v4;

    v1 = createnode(2);
    arr[0] = v1;
    v1->link = v2 = createnode(3);
    v2->link = NULL;

    v1 = createnode(1);
    arr[1] = v1;
    v1->link = v2 = createnode(4);
    v2->link = v3 = createnode(5);
    v3->link = NULL;

    v1 = createnode(1);
    arr[2] = v1;
    v1->link = v2 = createnode(6);
    v2->link = v3 = createnode(7);
    v3->link = NULL;

    v1 = createnode(2);
    arr[3] = v1;
    v1->link = v2 = createnode(8);
    v2->link = NULL;

    v1 = createnode(2);
    arr[4] = v1;
    v1->link = v2 = createnode(8);
    v2->link = NULL;

    v1 = createnode(3);
    arr[5] = v1;
    v1->link = v2 = createnode(8);
    v2->link = NULL;

    v1 = createnode(3);
    arr[6] = v1;
    v1->link = v2 = createnode(8);
    v2->link = NULL;

    v1 = createnode(4);
    arr[7] = v1;
    v1->link = v2 = createnode(5);
    v2->link = v3 = createnode(6);
    v3->link = v4 = createnode(7);
    v4->link = NULL;
    printf("DEPTH FIRST SEARCH IS:\n");
    dfs(1, arr);
    for(int i=0;i<MAX;i++)
    del(arr[i]);
}