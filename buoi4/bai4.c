#include <stdio.h>

int find_length_max(int a[], int n, int max, int current_max)
{
    if (n == 0) return max;
    if (a[n] > a[n-1] ) current_max++;
    else current_max = 0;
    if (current_max > max) max = current_max;
    find_length_max(a,n-1, max, current_max);
}

int main()
{
    int n, i;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",find_length_max(a, n, 0, 0));
    return 0;
}