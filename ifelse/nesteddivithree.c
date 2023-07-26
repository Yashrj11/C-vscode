#include <stdio.h>

int main()
{

    int n;

    printf("enter a number:\n");
    scanf("%d", &n);

    if (n % 5 == 0 && n % 3 == 0)
    {

        if (n % 15 != 0)
        {

            printf("number is not divisible by 15");
        }

        else
        {

            printf("number is divivsible by 3 and 5 but not 15");
        }
    }
    else
    {

        printf("number is not divisible ");
    }
    return 0;
}