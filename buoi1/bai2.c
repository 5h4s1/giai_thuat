#include<stdio.h>

void dequy(int n, int a[])
{
    if(n == 0){
        printf("%d", a[0]);
        return;
    }
    printf("%d", a[n]);
    dequy(n-1, a);
}

int main()
{
    int n,i;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    dequy(n-1, a);
    return 0;
}