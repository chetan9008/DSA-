#include<stdio.h>
#include<stdlib.h>
struct node 
{
    struct node *left;
    int data;
    struct node *right;
};
char ch[]={'a','b','c','d','e','\0','\0','\0','\0','\0'};
int left[]={1,3,-1,-1,-1,-1,-1,-1,-1,-1};
int right[]={2,4,-1,-1,-1,-1,-1,-1,-1,-1};
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%c\t",root->data);
        inorder(root->right);
    }
}
struct node *built(int in)
{
    struct node *t;
    t=NULL;
    if(in!=-1)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->left=built(left[in]);
        t->data=ch[in];
        t->right=built(right[in]);
    }
    return t;
}
int main()
{
    struct node *root;
    root=built(0);
    printf("INORDER TRAVERSAL :\n");
    inorder(root);
}