#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *left;
    int data;
    struct node *right;
};
char ch[]={'A','B','C','D','\0','E','F','G','H','\0','\0','\0','I','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'};
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%c  ",root->data);
        inorder(root->right);
    }
}
void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%c  ",root->data);
    }
}
void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%c  ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
struct node *built(int n)
{
    struct node *t;
    t=NULL;
    if(ch[n]!='\0')
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->left=built(2*n+1);
        t->data=ch[n];
        t->right=built(2*n+2);
    }
    return t;
}
int main()
{
    struct node *root;
    root=built(0);
    printf("\nINDORDER TRAVERAL:\n");
    inorder(root);
    printf("\nPREORDER TRAVERAL:\n");
    preorder(root);
    printf("\nPOSTORDER TRAVERAL:\n");
    postorder(root);
}