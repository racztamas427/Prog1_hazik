#include <stdio.h>
#include <stdlib.h>

void make_abs(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] = abs(arr[i]);
        }
    }
}
void make_abs(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] = abs(arr[i]);
        }
    }
}
int main()
{
    int arr[] = {4, -7, 34, -23, 67};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Tomb az eljaras elott:\n");
    print_array(arr, n);

    make_abs(arr, n);

    printf("Tomb az eljaras utan:\n");
    print_array(arr, n);

    return 0;
}