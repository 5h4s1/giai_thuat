#include <stdio.h>

int gieo_mam(int a[], int n, int k, int d, int v)
{
    if (k == v) return 0;
    if (k + d > n) return 1 + gieo_mam(a, n, k + d - n, d, v);
    return 1 + gieo_mam(a, n, k + d, d, v);
}

int main()
{
    int n, k, d, v;
    scanf("%d%d%d%d", &n, &k, &d, &v);
    int a[n];
    printf("%d", gieo_mam(a, n-1, k, d, v));
    return 0;
}