#include<stdio.h>


    int main(){
int n;


printf("enter number of array\n");
scanf("%d",&n);

int arr[n];

printf("enter array elements");
for(int i=0;i<=n-1;i++){


scanf("%d",&arr[i]);

}
int sum=0;

for(int i=0;i<n-1;i++){

    sum=sum+arr[i];

}

printf("%d",sum);
    return 0;

}