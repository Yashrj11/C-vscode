#include<stdio.h>


void swap(int x,int y)

{
int temp;

temp=x;
x=y;
y=temp;


return ;

}

    int main(){

 int a,b,temp;

    printf("enter first number\n");
    scanf("%d", &a);

    printf("enter second number\n");
    scanf("%d", &b);

 printf(" \n before swapping numbers are %d and %d\n", a,b);

swap(a,b);


    printf(" \n after swapping numbers are %d and %d", a,b);

    return 0;

}