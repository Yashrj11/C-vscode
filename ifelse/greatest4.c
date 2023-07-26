#include<stdio.h>


    int main(){

   int a,b,c,d;

   printf("enter a number:\n");
   scanf("%d",&a);

   printf("enter b number:\n");
   scanf("%d",&b);

printf("enter c number:\n");
   scanf("%d",&c);

   printf("enter d number:\n");
   scanf("%d",&d);


    if(a>b && a>c && a>d){

        printf("%d a is greatest",a);
    }
    if(b>a && b>c && b>d){

        printf("%d b is greatest",b);
    }

        if(c>a && c>a && c>d){

        printf("%d c is greatest",c);
    }
if(d>a && d>b && d>c){

        printf("%d c is greatest",d);
}
    return 0;

}