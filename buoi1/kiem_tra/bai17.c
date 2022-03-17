#include <stdio.h>

void nhap_mang(int i, int n, int a[])
{
    if(i == n) return;
    scanf("%d",&a[i]);
    nhap_mang(i+1, n, a);
}

void find(int i, int n, int p, int a[])
{
    if(i == n) return;
    if(a[i] == p) printf("%d ", i);
    find(i+1, n, p, a);
}

int main()
{
    int n, i, p;
    scanf("%d",&n);
    int a[n];
    nhap_mang(0, n, a);
    printf("Nhap vao p: ");
    scanf("%d",&p);
    find(0, n, p, a);
    return 0;
}