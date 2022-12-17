#include <stdio.h>
int x;
int searching(int a[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == x)
        {
            printf("%d is at %d location", x, i);
            count++;
            break;
        }
    }
    if (count==0)
    {
        printf("%d is not in the list", x);
    }
}
int main()
{
    printf("enter the element for searching:");
    scanf("%d", &x);
    int arr[10] = {12, 4, 55, 24, 53, 67, 22, 88, 33, 77};
    int s = sizeof(arr);
    s = s / 4;
    searching(arr, s);
}