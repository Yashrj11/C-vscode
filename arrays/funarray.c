#include<stdio.h>

void fun(int arr[]){


    arr[0]=10;
    return; 

}

    int main(){

int arr[5]={1,3,4,5,6};
printf("\n%d\n",arr[0]);

fun(arr);//without subscipts bhi callinng ho jati h,function calling me sirf nam likhna hot h

printf("%d\n",arr[0]);
    return 0;

}