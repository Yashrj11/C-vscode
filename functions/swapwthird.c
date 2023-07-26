#include<stdio.h>

        int main()
{
    int a,b,temp;

    printf("enter first number\n");
    scanf("%d", &a);

    printf("enter second number\n");
    scanf("%d", &b);

 printf(" \n before swapping numbers are %d and %d\n", a,b);

a=a+b;
b=a-b;
a=a-b;

    printf(" \n after swapping numbers are %d and %d", a,b);

    return 0;
}

