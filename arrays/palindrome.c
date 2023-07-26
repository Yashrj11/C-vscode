#include<stdio.h>


    int main(){

int n;

printf("enter array number:\n");
scanf("%d",&n);

int arr[n];

printf("enter array elements:\n");

for(int i=0;i<n;i++){

scanf("%d",&arr[i],n);

}

for(int i=0,j=n;i<n,j>0;i++,j--){

    if(arr[i]!=arr[j]){

        printf("it is not palindrome");
        break;
    }

    else if(arr[i]==arr[j]){

        printf("it is not palindrome");
        break;
    }
}


    return 0;

}