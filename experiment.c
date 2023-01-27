#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
struct poly
{
    int coff;
    int expx;
    int expy;
    struct poly *link;
};
void display(struct poly *q)
{
    while (q != NULL)
    {
        printf("%dx^%dy^%d + ", q->coff, q->expx,q->expy);
        q = q->link;
    }
    printf("0");
}
void polyappend(struct poly **q, int cx, int ex,int ey)
{
    struct poly *t;
    t = (*q);
    if (*q == NULL)
    {
        *q = (struct poly *)malloc(sizeof(struct poly));
        t = *q;
    }
    else
    {
        while (t->link != NULL)
            t = t->link;
        t->link = (struct poly *)malloc(sizeof(struct poly));
        t = t->link;
    }
    t->coff = cx;
    t->expx = ex;
    t->expy = ey;
    t->link = NULL;
}
int main()
{
    struct poly *first;
    first=NULL;
    polyappend(&first, 9, 3,2 );
    polyappend(&first, 8, 2,1  );
    polyappend(&first, 3, 1,1  );
    polyappend(&first, 12, 1,0  );
    polyappend(&first, 17, 0,0  );
    system("cls");
    printf("First Polynomial is:\n\n");
    display(first);
}
