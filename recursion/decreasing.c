#include<stdio.h>

void decreasing(int a ){

if(a==0) return ;

printf("%d\n",a);

decreasing(a-1);

return ;

}

   int main(){

int n;

printf("enter a number:\n");
scanf("%d",&n);

decreasing(n);


    return 0;

}