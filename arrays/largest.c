#include<stdio.h>


    int main(){
        int n;


printf("enter array numbers:\n");
scanf("%d",&n);


int arr[n];
printf("enter array elements:\n");



for(int i=0;i<n;i++){

scanf("%d",&arr[i]);

}

int max=arr[0];


for(int i=0;i<n;i++ ){

    if(max<arr[i]){

        max=arr[i];
    }

}

printf(" the maximum number is = %d",max);

    return 0;

}s