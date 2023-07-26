#include<stdio.h>

void reverse(int arr[],int n){

for(int i=0,j=n;i<j;i++,j--){

    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    
}



return ;
}


    int main(){

int n;

printf("enter array number:\n");
scanf("%d",&n);

int arr[n];

printf("enter array elements:\n");

for(int i=0;i<n;i++){

scanf("%d",&arr[i],n);

}


reverse(arr,n);

for(int i=0;i<n;i++){
 printf("\n%d",arr[i]);       }
    return 0;

}