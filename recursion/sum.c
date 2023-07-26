#include<stdio.h>

int sum(int n){

if(n==1 || n== 0) return 1;

 int recAns = n+sum(n-1);

return recAns;

}

    int main(){

int n;

printf("enter a number:\n");
scanf("%d",&n);

int addition=sum(n);

printf("number of sum of %d is :%d\n",n,addition);


    return 0;

}