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

for(int i=0;i<n;i++){

    for(int j=i+1;j<n;j++){

if(arr[i]==arr[j]){

flag=1;
    printf(" duplicate number is = %d at index %d\n",arr[i],i);
    break;
    

    }

    else{
        printf(" %d duplicate number not found in the array\n",arr[i]);
        break;
    }
}



}

// if(flag==1){

//     printf("\narray element is present in the array %d at index %d");
// }
// else{

//     printf("duplicate number is not present in the array\n");
// }


    return 0;

}