#include<stdio.h>


    int main(){


int n;

printf("enter array numbers:\n");
scanf("%d",&n);

int x;

printf("enter the number whose sum you want from array:\n");
scanf("%d",&x);

int arr[n];
int triplet = 0;
printf("enter array elements:\n");

for(int i=0;i<n;i++){

scanf("%d",&arr[i]);

}

for(int i=0;i<n;i++){


    for(int j=i+1;j<n;j++){



        for(int k=j+1;k<n;k++){


            if(arr[i]+arr[j]+arr[k]==x){


                printf("(first num= %d ,second num= %d , third num=%d )\n",arr[i],arr[j],arr[k]);

                triplet ++;
            }
        }
    }

}

printf("\ntotal pair is = %d ",triplet);
return 0;

    }