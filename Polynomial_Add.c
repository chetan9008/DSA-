#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
struct poly
{
    int coff;
    int exp;
    struct poly *link;
};
void polyadd(struct poly *f, struct poly *s, struct poly **t)
{
    struct poly *temp;
    temp = *t;
    if (f == NULL && s == NULL)
        return;

    while (f != NULL && s != NULL)
    {
        if (*t == NULL)
        {
            *t = (struct poly *)malloc(sizeof(struct poly));
            temp = *t;
        }
        else
        {
            temp->link = (struct poly *)malloc(sizeof(struct poly));
            temp = temp->link;
        }
        if (f->exp < s->exp)
        {
            temp->coff = s->coff;
            temp->exp = s->exp;
            s = s->link;
        }
        else
        {
            if (f->exp > s->exp)
            {
                temp->coff = f->coff;
                temp->exp = f->exp;
                f = f->link;
            }
            else
            {
                if (f->exp == s->exp)
                {
                    temp->coff = (f->coff) + (s->coff);
                    temp->exp = f->exp;
                    f = f->link;
                    s = s->link;
                }
            }
        }
    }
    while (f != NULL)
    {
        if (*t == NULL)
        {
            *t = (struct poly *)malloc(sizeof(struct poly));
            temp = *t;
        }
        else
        {
            temp->link = (struct poly *)malloc(sizeof(struct poly));
            temp = temp->link;
        }
        temp->coff = f->coff;
        temp->exp = f->exp;
        f = f->link;
    }
    while (s != NULL)
    {
        if (*t == NULL)
        {
            *t = (struct poly *)malloc(sizeof(struct poly));
            temp = *t;
        }
        else
        {
            temp->link = (struct poly *)malloc(sizeof(struct poly));
            temp = temp->link;
        }
        temp->coff = s->coff;
        temp->exp = s->exp;
        s = s->link;
    }
    temp->link = NULL;
}
void display(struct poly *q)
{
    while (q != NULL)
    {
        printf("%dx^%d + ", q->coff, q->exp);
        q = q->link;
    }
    printf("0");
}
void polyappend(struct poly **q, int c, int e)
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
    t->coff = c;
    t->exp = e;
    t->link = NULL;
}
int main()
{
    struct poly *first, *second, *add;
    first = second = add = NULL;
    // first polynomial
    polyappend(&first, 4, 5);
    polyappend(&first, 5, 4);
    polyappend(&first, 7, 2);
    polyappend(&first, 8, 1);
    polyappend(&first, 9, 0);
    system("cls");
    printf("First Polynomial is:\n\n");
    display(first);
    polyappend(&second, 5, 6);
    polyappend(&second, 5, 5);
    polyappend(&second, 3, 4);
    polyappend(&second, 4, 3);
    polyappend(&second, 6, 1);
    printf("\n\n");
    printf("Second Polynomial is:\n\n");
    display(second);
    polyadd(first, second, &add);
    printf("\n\n");
    printf("Resultant Polynomial is:\n\n");
    display(add);
}