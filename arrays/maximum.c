#include<stdio.h>


    int main(){

int n;

printf("enter number of array:\n");
scanf("%d",&n);

int arr[n];

printf("enter elements of array:\n");


for(int i=0;i<n;i++){

scanf("%d",&arr[i]);

}

int max=arr[0];

for(int i=0;i<n;i++){

if(max<arr[i]){

    max=arr[i];

}

}

printf(" maximum number is %d ",max);
    return 0;

}