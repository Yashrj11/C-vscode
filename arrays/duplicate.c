#include<stdio.h>


    int main(){


int arr[7]={1,2,5,4,5,6,8};

for(int i=0;i<=6;i++){

    for(int j=i+1;j<=6;j++)
    {
        
        if(arr[i]==arr[j]){

            printf("\n%d is the duplicate element\n",arr[i]);
            
        }
    else{

        printf("\nno duplicate element found\n");
        break;
    }
    
    
    }

}
    return 0;

}