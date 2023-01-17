#include <stdio.h>
#include <stdlib.h>
struct poly
{
    int coff, exp;
    struct poly *link;
};
void polyadd(int c, int e, struct poly **s)
{
    struct poly *r = NULL;
    struct poly *temp = *s;
    if ((*s == NULL) || (e > (*s)->exp))
    {
        (*s) = r = (struct poly *)malloc(sizeof(struct poly));
        (*s)->coff = c;
        (*s)->exp = e;
        (*s)->link = temp;
        temp = (*s);
    }
    else
    {
        while (temp != NULL)
        {
            if (temp->exp == e)
            {
                temp->coff += c;
                return;
            }
            else if ((temp->exp > e) && ((temp->link == NULL) || (temp->link->exp < e)))
            {
                r = (struct poly *)malloc(sizeof(struct poly));
                r->coff = c;
                r->exp = e;
                r->link = temp->link;
                temp->link = r;
                return;
            }
            temp = temp->link;
        }
    }
}
void mul(struct poly *f, struct poly *s, struct poly **m)
{
    int co, expo;
    struct poly *s1;
    s1 = s;
    if (f == NULL && s == NULL)
        return;
    if (f == NULL)
        *m = s;
    else
    {
        if (s == NULL)
            *m = f;
        else
        {
            while (f != NULL)
            {
                while (s != NULL)
                {
                    co = f->coff * s->coff;
                    expo = f->exp + s->exp;
                    s = s->link;
                    polyadd(co, expo, m);
                }
                s = s1;
                f = f->link;
            }
        }
    }
}
void display(struct poly *q)
{
    while (q != NULL)
    {
        printf("%dx^%d  +  ", q->coff, q->exp);
        q = q->link;
    }
    printf("0");
}
void polyappend(struct poly **q, int cof, int ex)
{
    struct poly *temp;
    temp = *q;
    if (*q == NULL)
    {
        (*q) = (struct poly *)malloc(sizeof(struct poly));
        (*q)->coff = cof;
        (*q)->exp = ex;
        (*q)->link = NULL;
    }
    else
    {
        while (temp->link != NULL)
            temp = temp->link;
        temp->link = (struct poly *)malloc(sizeof(struct poly));
        temp = temp->link;
        temp->coff = cof;
        temp->exp = ex;
        temp->link = NULL;
    }
}
int main()
{
    int coffecient, expression;
    struct poly *first, *second, *mul1;
    first = second = mul1 = NULL;
    printf("ENTER THE 1ST POLYNOMIAL\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the coffecient:");
        scanf("%d", &coffecient);
        printf("Enter the expression:");
        scanf("%d", &expression);
        polyappend(&first, coffecient, expression);
    }
    printf("\nENTER THE 2ND POLYNOMIAL\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the coffecient:");
        scanf("%d", &coffecient);
        printf("Enter the expression:");
        scanf("%d", &expression);
        polyappend(&second, coffecient, expression);
    }
    printf("First Polynomial is :\n");
    display(first);
    printf("\nSecond Polynomial is :\n");
    display(second);
    mul(first, second, &mul1);
    printf("\nResultant Polynomial is :\n");
    display(mul1);
}