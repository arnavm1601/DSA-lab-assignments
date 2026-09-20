#include <iostream>
#include <algorithm>
using namespace std;

void sort(int a[], int n)
{
    int l = 0, r = n - 1;

    while (l < r)
    {
        int mn = l, mx = l;

        for (int i = l + 1; i <= r; i++)
        {
            if (a[i] < a[mn])
                mn = i;
            if (a[i] > a[mx])
                mx = i;
        }

        swap(a[l], a[mn]);

        // If maximum was at l, it moved to mn
        if (mx == l)
            mx = mn;

        swap(a[r], a[mx]);

        l++;
        r--;
    }
}

int main()
{
    int a[] = {5, 2, 8, 1, 3, 7, 4};
    int n = 7;

    sort(a, n);

    for (int x : a)
        cout << x << " ";
}