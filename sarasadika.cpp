#include <stdio.h>
int n, i;
void mergesort(int a[], int i, int j);
void quickSort(int[], int, int);
int partition(int[], int, int);
void swap(int *, int *);
int main()
{
    int a[] = {10, 4, 12, 16, 9, 14, 13, 15};
    n = sizeof(a) / sizeof(a[0]);
    mergesort(a, 0, n - 1);
    printf("\nSorted array is :");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int pIndex = partition(arr, start, end);
        quickSort(arr, start, pIndex - 1);
        quickSort(arr, pIndex + 1, end);
    }
}

int partition(int arr[], int start, int end)
{
    int pIndex = start;
    int pivot = arr[end];
    int i;
    for (i = start; i < end; i++)
    {
        if (arr[i] < pivot)
        {
            swap(&arr[i], &arr[pIndex]);
            pIndex++;
        }
    }
    swap(&arr[end], &arr[pIndex]);
    return pIndex;
}

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

void mergesort(int a[], int i, int j)
{
    int mid;
    if (i < j)
    {
        mid = (i + j) / 2;
        mergesort(a, i, mid);
        mergesort(a, mid + 1, j);
        quickSort(a, 0, n - 1);
    }
}
