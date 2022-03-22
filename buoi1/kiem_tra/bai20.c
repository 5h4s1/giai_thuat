#include <stdio.h>

void input(int i, int n, int a[])
{
    if(i == n) return;
    scanf("%d",&a[i]);
    input(i+1, n, a);
}

void find_min(int min, int n, int a[])
{
    if(n == 0)
    {
        printf("Min: %d",min);
        return;
    }
    if(a[n-1] < min)
        min = a[n-1];
    find_min(min, n-1, a);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    input(0, n, a);
    find_min(a[n-1], n, a);
    return 0;
}