#include<stdio.h>

void increasing(int a ){

if(a==0) return ;

increasing(a-1);

printf("%d\n",a);

return ;

}

   int main(){

int n;

printf("enter a number:\n");
scanf("%d",&n);

increasing(n);


    return 0;

}