#include <stdio.h>

void dequy(int i, int n, int a[])
{
    if(i == n) return;
    scanf("%d",&a[i]);
    dequy(i+1, n, a);
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    dequy(0,n, a);
    for(i=0; i<n; i++){
        printf("%d\n", a[i]);
    }
    return 0;
}