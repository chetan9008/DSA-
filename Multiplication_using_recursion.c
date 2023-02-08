#include<stdio.h>
int recursion(int x,int y)
{
    if(x<y)
    recursion(y,x);
    else
    {
        if(y!=0)
        return (x+recursion(x,y-1));
        else
        return 0;
    }
}
int main()
{
    int x,y;
    printf("Enter the 1st and 2nd no:");
    scanf("%d%d",&x,&y);
printf("Multiplication of two no is %d",recursion(x,y));
}