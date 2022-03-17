#include<stdio.h>

// bai 1d
// int dequy( int n){
//     if(n == 0) return 2;
//     return (dequy(n-1) * dequy(n-1));
// }


// bai 1e

// int dequy(int n)
// {
//     if (n == 0) return 2;
//     if (n == 1) return 1;
//     return dequy(n-1) * dequy(n-2);
// }


int main(){
    int n;
    scanf("%d", &n);
    printf("%d", dequy(n));
    return 0;
}