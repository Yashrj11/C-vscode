#include<stdio.h>


    int main(){

int arr[6]={1,3,5,7,9,11};

int sumeven=0;
int sumodd=0;

for(int i=0;i<6;i++){

    if(i%2==0){

        sumeven+=arr[i];
    }

    else{

        sumodd+=arr[i];
    }
}
int res=sumeven-sumodd;

printf("%d",res);

    return 0;

}