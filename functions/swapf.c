#include<stdio.h>

int swap(int x,int y){

int temp=x;
x=y;
y=temp;


    printf(" \n after swapping numbers are %d and %d", x,y);
return  x,y;

}
        int main()
{
    int a,b,temp;

    printf("enter first number\n");
    scanf("%d", &a);

    printf("enter second number\n");
    scanf("%d", &b);

 printf(" \n before swapping numbers are %d and %d\n", a,b);

swap(a,b);

    return 0;
}