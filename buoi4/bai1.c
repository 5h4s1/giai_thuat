#include <stdio.h>
#include <stdbool.h>


void check_array(int a[], int n)
{
    if (n == 0) 
    {
        printf("Day la day giam tuyet doi");
        return;
    }
    if (a[n] >= a[n-1]) 
    {
        printf("Day khong la day giam tuyet doi");
        return;
    }
    check_array(a, n-1);
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
    check_array(a, n-1);
    return 0;
}