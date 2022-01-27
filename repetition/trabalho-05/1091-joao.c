#include <stdio.h>

//incompleto 1901

int main() {

    int k, n, m, x, y;

    scanf("%d", &k);
    scanf("%d %d", &n, &m);

    for (int i = 0; i < k; i++)
    {

        scanf("%d %d", &x, &y);

        if (x == n || y == m)
        {
            printf("divisa\n");
        }
        else
        {

            if (y > m)
            {
                printf("N");
            }
            else
            {
                printf("S");
            }

            if (x > n)
            {
                printf("E\n");
            }
            else
            {
                printf("O\n");
            }

        }

    }

    return 0;
}