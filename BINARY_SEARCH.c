#include <math.h>
#include <stdio.h>
int x;
void binary(int a[], int size)
{
    int left = 0, right = size - 1, mid, i = 1;
    while (i)
    {
        mid = (left + right) / 2;
        // printf("left is %d\nright is %d\nmid is %d\n",left,right,mid,size);
        if (a[mid] == x)
        {
            printf("%d is at %d location", a[mid], mid);
            break;
        }
        if (a[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
        if (i > log2(size))
        {
            printf("%d is not find in the list", x);
            break;
        }
        i++;
    }
}
int main()
{
    printf("enter the element to search:");
    scanf("%d", &x);
    int arr[40] = {2, 5, 22, 33, 89, 199, 288, 292, 399, 422, 423, 431, 432, 435, 436, 437, 438, 439, 444, 448, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520};
    int s = sizeof(arr) / 4;
    binary(arr, s);
    return 0;
}