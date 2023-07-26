#include<stdio.h>


    int main(){

int arr[5]={1,2,3,4,5};

printf("\t%u\n",&arr[0]);
printf("\t%u\n",&arr[1]);


for(int i=3;i<5;i++){


    printf("\t%u",&arr[i]);
}
    return 0;

}