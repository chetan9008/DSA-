#include<stdio.h>
#include<stdlib.h>
struct bst
{
    struct bst *left;
    int data;
    struct bst *right;
};
void inorder(struct bst *q)
{
    if(q!=NULL)
    {
        inorder(q->left);
        printf("%d\n",q->data);
        inorder(q->right);
    }
}
void insert(struct bst **q,int n)
{
    if((*q)==NULL)
    {
        (*q)=(struct bst *)malloc(sizeof(struct bst));
        (*q)->left=NULL;
        (*q)->data=n;
        (*q)->right=NULL;
    }
    else
    {
        if((*q)->data>n)
        insert(&((*q)->left),n);
        else
        insert(&((*q)->right),n);
    }
}
int main()
{
    struct bst *b;
    int n;
    b=NULL;
    for(int i=0;i<10;i++)
    {
        printf("Enter the element:");
        scanf("%d",&n);
        insert(&b,n);
    }
    printf("\nSorted List is:\n");
    inorder(b);
}