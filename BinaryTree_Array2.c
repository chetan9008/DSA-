#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *left;
    int data;
    struct node *right;
};
char ch[]={'A','B','C','D','E','\0','G','\0','\0','K','\0','\0','\0','H','\0','\0','\0','\0','\0','L','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'};
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%c\t",root->data);
        inorder(root->right);
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
    printf("INDORDER TRAVERAL:\n");
    inorder(root);
}