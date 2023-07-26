#include<stdio.h>


    int main(){

int arr [4];

for(int i=0;i<=4;i++){
printf("\nenter element number %d:\n",i+1);
scanf("%d",&arr[i]);

}

for(int i=4;i>=0;i--){


    printf("\t%d\n",arr[i]);
}
    return 0;

}