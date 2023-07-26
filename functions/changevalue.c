#include<stdio.h>


    int main(){

int a=5;

printf("before pointer hist %d\n",a);

int* b =&a;

*b= 7;

printf("after pointer hist %d",a);

    return 0;

}