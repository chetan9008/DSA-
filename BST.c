#include<stdio.h>
#include<stdlib.h>
struct bstree
{
    struct bstree *left;
    int data;
    struct bstree *right;
};
int search(struct bstree *q,int s)
{
    if(q!=NULL)
    {
        if(q->data==s)
        return 1;
        if(q->data<s)
        search(q->right,s);
        else
        search(q->left,s);
    }
}
void postorder(struct bstree *q)
{
        if(q!=NULL)
    {
        postorder(q->left);
        postorder(q->right);
        printf("%d\t",q->data);
    }   
}
void preorder(struct bstree *q)
{
        if(q!=NULL)
    {
        printf("%d\t",q->data);
        preorder(q->left);
        preorder(q->right);
    }   
}
void inorder(struct bstree *q)
{
    if(q!=NULL)
    {
        inorder(q->left);
        printf("%d\t",q->data);
        inorder(q->right);
    }
}
void insert(struct bstree **q,int n)
{
    if(*q==NULL)
    {
        *q=(struct bstree *)malloc(sizeof(struct bstree));
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
    struct bstree *bs;
    int n;
    bs=NULL;
    for(int i=0;i<5;i++)
    {
        printf("Enter the no:");
        scanf("%d",&n);
        insert(&bs,n);
    }
    printf("\nINORDER TRAVERSAL:\n");
    inorder(bs);
    printf("\nPOSTORDER TRAVERSAL:\n");
    postorder(bs);
    printf("\nPREORDER TRAVERSAL:\n");
    preorder(bs);
    int s=5,x;
    if(x=search(bs,s)==1)
    printf("\nElement is present in tree\n");
    else
    printf("\nElement is not found\n");
}