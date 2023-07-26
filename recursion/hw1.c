#include<stdio.h>

void increasing(int a ){

if(a==0) return ;

printf("%d\n",a);

increasing(a-1);


return ;

}

void decreasing(int a ){

if(a==0) return ;

printf("%d\n",a);

decreasing(a-1);


return ;

}

   int main(){

int n,m;

printf("enter for print increasing order number:\n");
scanf("%d",&n);

printf("enter for print decreasing  order number:\n");
scanf("%d",&m);

printf("\nincreasing order number\n\n");
increasing(n);

printf("\n\nincreasing order number\n\n");

decreasing(m);


    return 0;

}