#include <stdio.h>

int main()
{

    int n;

    printf("enter a number of rows:\n");
    scanf("%d", &n);

    for (int i = i; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {

            int a = n / 2 + 1;

            if (i == a || j == a)
            {
                printf("*");
            }
            else
            {
                printf("#");
            }
        }

        printf("\n");
    }
    return 0;
}