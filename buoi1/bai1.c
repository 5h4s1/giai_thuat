#include<stdio.h>

int dequy( int n){
    if(n == 0) return 2;
    return (dequy(n-1) * dequy(n-1));
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", dequy(n));
    return 0;
}