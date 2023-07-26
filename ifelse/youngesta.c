#include<stdio.h>


    int main(){

   int a,b,c;

   printf("enter ram age:\n");
   scanf("%d",&a);

   printf("enter shyam age:\n");
   scanf("%d",&b);

printf("enter c ghanshyam :\n");
   scanf("%d",&c);

    if(a<b && a<c){

        printf("%d ram is youngest",a);
    }
    if(b<a && b<c){

        printf("%d shayam is youngest",b);
    }

        if(c<a && c<a){

        printf("%d ghanshayam is youngest",c);
    }


    return 0;

}