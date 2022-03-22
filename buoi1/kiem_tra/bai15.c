int getFlag(int a[], int n)
{
    if (n == 1)
        return a[0];
    if (a[n - 1] > getFlag(a, n - 1))
        return a[n - 1];
    return getFlag(a, n - 1);
}
int findFlag(int a[], int n)
{
    if (n == 1)
        return 0;
    if (a[n - 1] > a[getFlag(a, n - 1)])
        return n - 1;
    return getFlag(a, n - 1);
}