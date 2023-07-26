#include <stdio.h>

int main()
{

    int n;

    printf("enter a number:\n");
    scanf("%d", &n);

    if (n % 5 == 0 || n % 3 == 0)
    {

        printf("number is divisible by three and five ");
    }
    else
    {

        printf("number is not divisible ");
    }
    return 0;
}