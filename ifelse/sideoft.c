#include<stdio.h>


    int main(){

   int a,b,c;

   printf("enter a side:\n");
   scanf("%d",&a);

   printf("enter b side:\n");
   scanf("%d",&b);

printf("enter c side:\n");
   scanf("%d",&c);

   if ((a+b)>c && (b+c)>a && (c+a)>b){

printf("triangle is valid");


   }

   else {

    printf("triangle is not valid");
   }
    return 0;

}