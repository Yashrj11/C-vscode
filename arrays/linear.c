#include<stdio.h>


    int main(){


int n;
int flag=0;
printf("enter array number:\n");
scanf("%d",&n);

int arr[n];

printf("enter array elements:\n");

for(int i=0;i<n;i++){

scanf("%d",&arr[i],n);

}
int x;
printf("enter the number you want to search\n");
scanf("%d",&x);


for(int i=0;i<n;i++){

if(arr[i]==x){

flag=1;
    break;
}



}

if(flag==1){

    printf("array element is present in the array %d at index %d",x);
}
else{

    printf("%d is not present in the array\n",x);
}
    return 0;

}