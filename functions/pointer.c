#include<stdio.h>


    int main(){


int a=1;
int* b=&a;

printf("%d\n",a);
printf("%p\n",b);
printf("%u\n",b);
printf("%d\n",*b);

    return 0;

}