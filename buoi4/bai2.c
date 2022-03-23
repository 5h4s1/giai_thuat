#include <stdio.h>
#include <string.h>

int find_length_max(char str[], int n, int max, int current_max)
{
    if (n == 0) return max;
    if (str[n] == '0') current_max++;
    else current_max = 0;
    if (current_max > max) max = current_max;
    find_length_max(str,n-1, max, current_max);
}

int main()
{
    char str[100];
    scanf("%s", str);
    printf("%d",find_length_max(str, strlen(str)-1, 0, 0));
    return 0;
}