#include<stdio.h>

int factorial(int n){

if(n==1 || n== 0) return 1;


    return n*factorial(n-1);

}

    int main(){

int n;

printf("enter a number:\n");
scanf("%d",&n);

int fact=factorial(n);

printf("factorial of %d is :%d\n",n,fact);


    return 0;

}