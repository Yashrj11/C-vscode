#include <stdio.h>

int main()
{

    int n, a;

    printf("enter a number:\n");
    scanf("%d", &n);

    a = 0;

    for (int i = 2; i <= n - 1; i++)
    {

        if (n % i == 0)
        {

            printf("given number is composite number\n");
            a = 1;
            break;
        }
    }

    if (n == 1)
    printf("1 i neithe prime nor composite");
    else if (a == 0)
    printf("given number is prime number\n");
    else
    printf("given number is composite");
    return 0;
}