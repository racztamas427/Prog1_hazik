#include <stdio.h>

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1)
            printf("%d, ", arr[i]);
        else
            printf("%d\n", arr[i]);
    }
}
int main()
{
    int arr[] = {4, 7, 34, 23, 67};
    int n = sizeof(arr) / sizeof(arr[0]);

    print_array(arr, n);

    return 0;
}