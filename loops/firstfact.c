#include<stdio.h>


    int main(){


int n;
int product=1;

printf("enter a number:\n");
scanf("%d",&n);

for(int i=1;i<=n;i++){

    product=product*i;

    printf("factorial of %d is %d\n",i,product);
}
    return 0;

}