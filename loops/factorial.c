#include<stdio.h>


    int main(){

int n;

printf("enter a number:\n");
scanf("%d",&n);

int product =1;

for(int i=1;i<=n;i++){

    product=product*i;

}
printf("the factorial number is %d",product);

    return 0;

}