#include<stdio.h>


    int main(){

int arr[99];

int sum=0;

for(int i=0;i<=98;i++){

sum=sum+arr[i];

}

int sum2=(100*(100+1))/2;

int dif=sum-sum;

printf("\nmissing element is = %d",dif);

    return 0;

}