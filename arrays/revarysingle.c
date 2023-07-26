#include<stdio.h>

void reverse(int arr[],int n){



    int i=0;
    int j=n;

    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
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

scanf("%d",&arr[i]);

}


reverse(arr,n);

for(int i=0;i<n;i++){
 printf("\n%d",arr[i]);       }
    return 0;

}