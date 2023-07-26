#include<stdio.h>


    int main(){

int n;

printf("enter number of array:\n");
scanf("%d",&n);


int arr[n];

printf("Enter array elements:\n");

for(int i=0;i<n;i++){


scanf("%d",&arr[i]);}


for(int i=0;i<n;i++){


printf("%d",arr[i]);}



for(int i=0;i<n;i++){

if(i%2!=0){
    
    arr[i]=arr[i]*2;

}

else{

arr[i]=arr[i]+10;

}

}

printf("\n-------------- after operation applied    -------------\n");

for(int i=0;i<n;i++){


printf(" %d ",arr[i]);}

    return 0;

}