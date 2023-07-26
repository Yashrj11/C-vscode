#include<stdio.h>
#include<stdbool.h>

    int main(){

        int n;

printf("enter array number:\n");
scanf("%d",&n);

int arr[n];

printf("enter array elements:\n");

for(int i=0;i<n;i++){

scanf("%d",&arr[i]);

}

int x;
printf("enter the number you want to search\n");
scanf("%d",&x);

int idx=-1;
bool flag=false;

for(int i=0;i<n;i++){

if(arr[i]==x){

    flag=true;
    idx=i;
    break;
}

if(flag==false){

    printf("%d is not present in the array",x);
    break;

}
else{

    printf("%d is present in the array and its index is %d",x,idx);
    break;
}

}


    return 0;

}