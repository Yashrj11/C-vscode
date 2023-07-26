#include<stdio.h>

int fibbonacci(int n){

if(n==1 || n== 2) return 1;

int a=fibbonacci(n-1);
int b=fibbonacci(n-2);

    int ans= a+b;

return ans;
}

    int main(){

int n;

printf("enter a number:\n");
scanf("%d",&n);

int fib=fibbonacci(n);

printf("factorial of %d is :%d\n",n,fib);


    return 0;

}