#include <stdio.h>

long sum(int a[], int n)
{
    if (n == 0)
        return 0;
    if (a[n - 1] > a[n])
        return a[n - 1] + sum(a, n - 1);
    return sum(a, n - 1);
}