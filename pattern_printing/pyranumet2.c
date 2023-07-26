#include<stdio.h>


    int main(){

        int n;

        printf("enter row number:\n");
        scanf("%d",&n);

        int nst=1;
        int nsp=3;

        for(int i=1;i<=n;i++){


                for(int k=1;k<=nsp;k++){

                    print(" ");

                    nsp=nsp-1;
                }
            for(int j=1;j<=nst;j++){


                printf("*");
            }

printf("\n");
        }

    return 0;

}