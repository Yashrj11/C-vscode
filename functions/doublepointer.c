#include<stdio.h>


    int main(){

int a=7;

int*b=&a;

int** c=&b;

printf("%d\n",a);
printf("%u\n",&a);
printf("%d\n",*b);
printf("%u\n",&b);
printf("%d\n",**c);

    return 0;

}