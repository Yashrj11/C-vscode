#include<stdio.h>
#include<limits.h>

    int main(){

int n;

printf("enter number of array:\n");
scanf("%d",&n);


int arr[n];


printf("enter array elements:\n");


for(int i=0;i<n;i++){

scanf("%d",&arr[i]);


}

int min=INT_MIN;

for(int i=0;i<n;i++){

if(min>arr[i]){

    min=arr[i];
}


}

printf("minimum number is %d",min);
    return 0;

}