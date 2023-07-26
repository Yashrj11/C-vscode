#include<stdio.h>

int main(){

int l,b;


    printf("enter lenght:\n");
    scanf("%d",&l);
    printf("enter bredht:\n");
    scanf("%d",&b);
    
    int a=l*b;

    int p=2*(l*b);

    if(a>p){

        printf("area is greater than parameter");

    }
    else{

        printf("area is not greater than parameter");
    }

return 0;
}