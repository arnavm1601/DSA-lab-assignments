#include <iostream>
using namespace std;

void selection(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int m = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[m])
                m = j;
        swap(a[i], a[m]);
    }
}

void insertion(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int x = a[i], j = i - 1;
        while (j >= 0 && a[j] > x)
            a[j + 1] = a[j], j--;
        a[j + 1] = x;
    }
}

void bubble(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
}

void merge(int a[], int l, int m, int r)
{
    int i = l, j = m + 1, k = 0, b[100];
    while (i <= m && j <= r)
        b[k++] = a[i] < a[j] ? a[i++] : a[j++];
    while (i <= m)
        b[k++] = a[i++];
    while (j <= r)
        b[k++] = a[j++];
    for (i = l, k = 0; i <= r; i++)
        a[i] = b[k++];
}

void mergesort(int a[], int l, int r)
{
    if (l >= r)
        return;
    int m = (l + r) / 2;
    mergesort(a, l, m);
    mergesort(a, m + 1, r);
    merge(a, l, m, r);
}

int partition(int a[], int l, int r)
{
    int p = a[r], i = l - 1;
    for (int j = l; j < r; j++)
        if (a[j] < p)
            swap(a[++i], a[j]);
    swap(a[i + 1], a[r]);
    return i + 1;
}

void quicksort(int a[], int l, int r)
{
    if (l < r)
    {
        int p = partition(a, l, r);
        quicksort(a, l, p - 1);
        quicksort(a, p + 1, r);
    }
}

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

int main()
{
    int a[] = {5, 2, 8, 1, 3}, n = 5;

    selection(a, n);
    print(a, n);

    int b[] = {5, 2, 8, 1, 3};
    insertion(b, n);
    print(b, n);

    int c[] = {5, 2, 8, 1, 3};
    bubble(c, n);
    print(c, n);

    int d[] = {5, 2, 8, 1, 3};
    mergesort(d, 0, n - 1);
    print(d, n);

    int e[] = {5, 2, 8, 1, 3};
    quicksort(e, 0, n - 1);
    print(e, n);
}