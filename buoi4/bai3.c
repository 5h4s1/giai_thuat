
#include <stdio.h>

int sum(int a[], int n)
{
    if (n == -1) return 0;
    if (a[n] % 2 == 1) return sum(a, n - 1) + a[n];
    return sum(a, n-1);
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d", sum(a, n - 1));
    return 0;
}