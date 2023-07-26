#include <stdio.h>

int main()
{
    int a,b;

    printf("enter first number\n");
    scanf("%d", &a);

    printf("enter second number\n");
    scanf("%d", &b);

int sum =(a,b);

    printf(" \n minimum number is: %d", sum);

    return 0;
}

int sum(int x ,int y)
{

    return (x + y);
}