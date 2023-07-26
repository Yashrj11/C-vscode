#include<stdio.h>


int stair(int n){

if(n==1) return 1;
if(n==2) return 2;
if(n==3) return 3;
int totalways=stair(n-1)+stair(n-2)+stair(n-3);

return totalways;


}

int main(){

    int n;

printf("enter a number:\n");
scanf("%d",&n);

int stairpath=stair(n);

printf("starpath of %d is :%d\n",n,stairpath);


    return 0;

}

