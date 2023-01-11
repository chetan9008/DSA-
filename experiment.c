#include<stdio.h>
void ex(int a)
{
    printf("a is %d\n",a);
    printf("\n\n");
    if(a!=0)
    {
        ex(a-1);
        printf("a is %d\n",a);
    }
}
int main()
{
    int a=12;
    ex(a);
    return 0;
}