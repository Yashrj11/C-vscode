#include<stdio.h>


    int main(){

        int n;
printf("enter array number:\n");
scanf("%d",&n);

int arr[n];

printf("enter array elements:\n");

for(int i=0;i<n;i++){

scanf("%d",&arr[i]);

}

int brr[n];

for(int i=0;i<=n;i++){

brr[i]=arr[i];

}

for(int i=0;i<=n;i++){

    printf("\t%d",brr[n-i]);
}

    return 0;

}