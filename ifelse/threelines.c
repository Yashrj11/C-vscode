#include <stdio.h>

int main()
{

 int x1,y1,x2,y2,x3,y3;

 printf("enter value of x1\n");
 scanf("%d",&x1);

 printf("enter value of x2:\n");
 scanf("%d",&x2);

 printf("enter value of y1:\n");
 scanf("%d",&y1);

 printf("enter value of y2:\n");
 scanf("%d",&y2);

 printf("enter value of x3:\n");
 scanf("%d",&x3);

 printf("enter value of y3:\n");
 scanf("%d",&y3);

int m1=(y2-y1)/(x2-x1);

int m2=(y3-y2)/(x3-x2);


if(m1=m2){

    printf("they fall on same line");
}

        else{

            printf("they dont fall on same line");
        }
    return 0;
}