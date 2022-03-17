#include <stdio.h>

void dequy(int n)
{
    if(n  == 0) return;
    dequy(n/2);
    printf("%d", n %2);
}

int main()
{
    dequy(35);
    return 0;
}