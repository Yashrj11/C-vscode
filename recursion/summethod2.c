#include<stdio.h>

void sum(int n,int s){

if(n== 0){
printf("%d",s);
return ;}

sum(n-1,s+n);
return ;

}

    int main(){

int n,s=0;

printf("enter a number:\n");
scanf("%d",&n);

sum(n,s);



    return 0;

}