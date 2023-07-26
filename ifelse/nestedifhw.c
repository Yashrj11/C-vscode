#include<stdio.h>


    int main(){

   int a,b,c;

   printf("enter a age:\n");
   scanf("%d",&a);

   printf("enter b age:\n");
   scanf("%d",&b);

   printf("enter c age:\n");
   scanf("%d",&c);


    if (a<b){

        if (a<c)
            printf("%d ram is youngest",a);
        else
            printf("%d ghanshyam is youngest",c);
    }

    else{

        if(b<c)
            printf("%d shayam is youngest",b);
        else
            printf("%d is ghanshyam youngest",c);

    }

return 0;
    }