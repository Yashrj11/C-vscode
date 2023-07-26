#include<stdio.h>


    int main(){


int arr[5];

printf("enter array elements:\n");

for(int i=0;i<5;i++){
scanf("%d",&arr[i]);
}

printf("entered array elements are:\n");

for(int i=0;i<5;i++){

printf("\t %d ",arr[i]);

}


    return 0;

}