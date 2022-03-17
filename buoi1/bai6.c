#include <stdio.h>

void dequy(int i, int n){
    if(n % i == 0 && n % 2 == 1){
        printf("%d", i);
        return;
    }
    dequy(i-1,n);
}

int main(){
    int n;
    scanf("%d", &n);
    // printf("%d",n);
    dequy(n-1, n);
    return 0;
}