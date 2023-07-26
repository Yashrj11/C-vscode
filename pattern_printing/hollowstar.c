#include <stdio.h>

int main()
{

    int n, m, i, j;

    printf("enter a number of rows:\n");
    scanf("%d", &n);

    printf("enter number of columns\n");
    scanf("%d", &m);

    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= m; j++)
        {

            if (i == 1 || i == n || j == 1 || j==m)
            {

                printf("*");
            }

            else
            {

                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}