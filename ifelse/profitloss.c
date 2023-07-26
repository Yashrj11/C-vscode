#include<stdio.h>

int main(){

    int cp,sp;

    printf("enter cost price:\n");
    scanf("%d",&cp);

    printf("enter selling price:\n");
    scanf("%d",&sp);

    if(sp>cp){  

            printf("profit");
    }

    if(cp>sp){

            printf("loss");

    }

    if(cp==sp){

        printf("no losss no profit");
    }

    return 0;
}