#include<stdio.h>


    int main(){

   int a,b,c;

   printf("enter a number:\n");
   scanf("%d",&a);

   printf("enter b number:\n");
   scanf("%d",&b);

printf("enter c number:\n");
   scanf("%d",&c);

    if(a>b){//b is out of race

        if(a>c)
            printf("%d is greates",a);
        else    //a<c -> b<a<c
            printf("%d is greates",c);
    }

    else{

        if(b>c)
            printf("%d is greatest",b);
        else //c>d ->  a<b<c
            printf("%d is greates",c);

        
    }

    return 0;

}