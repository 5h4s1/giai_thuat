#include <stdio.h>

void ucln(int a, int b)
{
    if(b == 0){
        printf("%d", a);
        return;
    }
    ucln(b, a % b);
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    ucln(a, b);
    return 0;

}