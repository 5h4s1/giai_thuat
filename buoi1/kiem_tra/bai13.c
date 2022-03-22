#include <stdio.h>

bool check(int a[], int n)
{
    if (n == 0)
        return true;
    if (a[n - 1] % 2 != 0)
        return false;
    return check(a, n - 1);
}