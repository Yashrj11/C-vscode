#include<stdio.h>


    int main(){

int n,arm=0;

printf("enter a number:\n");
scanf("%d",&n);

int c=n;
for(int i=1;i<=n;i++){
    
   int r=n%10;
    arm=(r*r*r)+arm;
    n=n/10;
}

if(c==arm)
printf("\nnumber %d is armstrong %d",i,arm);
else
printf("\nnumber not armstrong");

}
    return 0;

}