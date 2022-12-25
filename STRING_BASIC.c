#include <stdio.h>
#include <string.h>
int xstrcmp(char *s,char *t)
{
    while(*s==*t)
    {
        if(!(*s))
        return 0;
        s++;
        t++;
    }
    return (*s-*t);
}
void xstrcat(char *s, char *t)
{
    while(*t)
    t++;
    while(*s)
    *t++=*s++;
    *t='\0';
}
void xstrcpy(char *s, char *t)
{
    while (*s != '\0') // because string has null in last
    {
        *t++ = *s++;
    }
    *t = '\0';
}
int xstrlen(char *s)
{
    int len = 0;
    while (*s)
    {
        len++;
        s++;
    }
    return len;
}
int main()
{
    char a[] = "chetan";
    char b[] = "kumar";
    char c[30];
    printf("\n1st string is:%s\n", a);
    int len = xstrlen(a);
    printf("\nlength of %s is %d\n", a, len);
    xstrcpy(b, c);
    printf("\nAfer copying string is:%s\n", c);
    xstrcat(a,c);
    printf("\nString 3 after concatenation is:%s\n", c);
    if(xstrcmp(a,c)==0)
    printf("\n%s and %s is identical\n",a,c);
    else
    printf("\n%s and %s is not identical\n",a,c);
    
}