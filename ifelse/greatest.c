#include<stdio.h>


    int main(){

   int a,b,c;

   printf("enter a number:\n");
   scanf("%d",&a);

   printf("enter b number:\n");
   scanf("%d",&b);

printf("enter c number:\n");
   scanf("%d",&c);

    if(a>b && a>c){

        printf("%d a is greatest",a);
    }
    if(b>a && b>c){

        printf("%d b is greatest",b);
    }

        if(c>a && c>a){

        printf("%d c is greatest",c);
    }


    return 0;

}