#include <stdio.h>


bool kt(int n)
{
    int d = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            d = d + 1;
    }
    if (d == 1)
        return true;
    return false;
}
int dsnt(int a[], int n)
{
    if (n == 0)
        return 0;
    if (kt(a[n - 1]))
        return 1 + dsnt(a, n - 1);
    return dsnt(a, n - 1);
}