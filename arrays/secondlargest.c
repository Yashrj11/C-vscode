#include<stdio.h>


    int main(){

int n;
printf("enter array elements:\n");
scanf("%d",&n);

int arr[n];

printf("enter array elements:\n");

for(int i=0;i<n;i++){

scanf("%d",&arr[i]);

}

int max=arr[0];
int smax=arr[0];

for(int i=0;i<n;i++){


if(max<arr[i]){

    max=arr[i];
}

}

for(int i=0;i<n;i++){

    if(arr[i]!=max && smax<arr[i]){

        smax=arr[i];
    }


}
printf("\n first largest number is =%d",max);
printf("\n second largest number is =%d",smax);
    return 0;

}