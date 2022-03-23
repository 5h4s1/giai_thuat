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
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int min_material(int a[][100], int d, int c, int x, int y)
{
    if (y == -1) return 0;
    // if ()
}

int main()
{
    srand((int)time(0));
    int x, y, d, c;
    scanf("%d%d", &d, &c);
    int a[d][c];
    rand_array(a, d, c);

    return 0;
}   