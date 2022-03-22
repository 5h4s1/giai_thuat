void abcdef(int a[], int n)
{
    if (n == 1)
        return;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[n - 1])
        {
            int A = a[i];
            a[i] = a[n - 1];
            a[n - 1] = A;
        }
    }
    abcdef(a, n - 1);
}