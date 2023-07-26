#include <stdio.h>

int main()
{
    // int n;

    // printf("enter a number:");
    // scanf("%d", &n);
    // //****** UPTO n number of stars
    for (int i = 1; i <= 3; i++)//outer loop ->no of lines
    {
        for (int i = 1; i <= 5; i++)// inner loop ->no of stars
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}