#include <stdio.h>
#define MAX 5
void display(int *arr)
{
    for (int i = 0; i < MAX; i++)
        printf("%d\t", arr[i]);
    printf("\n");
}
void enqueue(int *arr, int *r, int *f, int n)
{
    if (((*r == MAX - 1) && (*f == 0)) || (*r + 1 == *f))
    {
        printf("OVERFLOW\n");
        return;
    }
    if (*r == MAX - 1)
        (*r) = 0;
    else
        (*r)++;

    arr[*r] = n;
    if (*f == -1)
        *f = 0;
}
void dequeue(int *arr, int *r, int *f)
{
    if (*f == -1)
    {
        printf("UNDERFLOW\n");
        return;
    }
    printf("Deleted element is %d\n", arr[*f]);
    arr[*f] = 0;
    if (*f == *r)
    {
        *f = -1;
        *r = -1;
    }
    else
    {
        if (*f == MAX - 1)
            *f = 0;
        else
            (*f)++;
    }
}
int main()
{
    int arr[MAX];
    int front, rear;
    front = -1;
    rear = -1;
    for (int i = 0; i < MAX; i++)
        arr[i] = 0;
    printf("Elements after INSERTION\n");
    enqueue(arr, &rear, &front, 4);
    enqueue(arr, &rear, &front, 5);
    enqueue(arr, &rear, &front, 6);
    enqueue(arr, &rear, &front, 7);
    enqueue(arr, &rear, &front, 8);
    display(arr);
    enqueue(arr, &rear, &front, 9);
    dequeue(arr, &rear, &front);
    dequeue(arr, &rear, &front);
    dequeue(arr, &rear, &front);
    // dequeue(arr,&rear,&front);
    // dequeue(arr,&rear,&front);
    dequeue(arr, &rear, &front);
    printf("Elements after DELETION\n");
    display(arr);
    printf("Elements after again INSERTION\n");
    enqueue(arr, &rear, &front, 10);
    enqueue(arr, &rear, &front, 11);
    display(arr);
}