#include <stdio.h>
#define MAX 5
void display(int *arr)
{
    for (int i = 0; i < MAX; i++)
        printf("%d\t", arr[i]);
    printf("\n\n");
}
void dequeue(int *arr, int *front, int *rear)
{
    if (*front == -1)
    {
        printf("UNDERFLOW\n");
        return;
    }

    int data = arr[*front];
    arr[*front] = 0;
    printf("Deleted element is %d\n", data);

    if (*front == *rear)
        *front = *rear = -1;
    else
        (*front)++;
}
void enqueue(int *arr, int *front, int *rear, int n)
{
    if (*rear == MAX - 1)
    {
        printf("OVERFLOW\n");
        return;
    }

    (*rear)++;
    arr[*rear] = n;

    if (*front == -1)
        *front = 0;
}
int main()
{
    int f, r, arr[MAX];
    f = -1, r = -1;
    enqueue(arr, &f, &r, 1);
    enqueue(arr, &f, &r, 2);
    enqueue(arr, &f, &r, 3);
    enqueue(arr, &f, &r, 4);
    enqueue(arr, &f, &r, 5);
    enqueue(arr, &f, &r, 6);
    display(arr);
    dequeue(arr, &f, &r);
    dequeue(arr, &f, &r);
    dequeue(arr, &f, &r);
    display(arr);
    // dequeue(arr,&f,&r);
    // dequeue(arr,&f,&r);
    display(arr);
    // dequeue(arr,&f,&r);
    // dequeue(arr,&f,&r);
    enqueue(arr, &f, &r, 6);
    enqueue(arr, &f, &r, 6);
    display(arr);
    return 0;
}