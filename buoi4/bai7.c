#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rand_array(int a[][100], int d, int c)
{
    int i, j;
    for (i = 0; i < d; i++)
    {
        for (j = 0; j < c; j++)
        {
            a[i][j] = 1 + rand() % (99);
            printf("a[%d%d]%d ", i, j, a[i][j]);
        }
        printf("\n");
    }
}

int max_value(int a[][100], int d, int c, int x, int y)
{

    if (a[y + 1][x + 1] < a[y + 1][x])
    {
        if (x == 0)
            return x + 1;
        else if (a[y + 1][x + 1] < a[y + 1][x - 1] && x != 0 && x != c - 1)
            return x + 1;
    }
    if (a[y + 1][x - 1] < a[y + 1][x])
    {
        if (x == c - 1)
            return x - 1;
        else if (a[y + 1][x - 1] < a[y + 1][x + 1] && x != 0 && x != c - 1)
            return x - 1;
    }
    return x;
}

int min_material(int a[][100], int d, int c, int x, int y)
{
    if (y == d - 1)
        return 0;
    x = max_value(a, d, c, x, y);
    printf("%d %d\n", x, a[y + 1][x]);
    return a[y + 1][x] + min_material(a, d, c, x, y + 1);
}

int main()
{
    srand((int)time(0));
    int x, y, d, c;
    scanf("%d%d", &d, &c);
    int a[d][c];
    rand_array(a, d, c);
    scanf("%d%d", &x, &y);

    printf("%d", min_material(a, d, c, x, y) + a[y][x]);
    return 0;
}