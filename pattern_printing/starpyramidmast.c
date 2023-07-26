#include<stdio.h>


    int main(){


int n;
int nst=n;
int nsp=1;

printf("enter row number:\n");
scanf("%d",&n);

for(int i=1;i<=n;i++){

    for(int j=1;j<=nst;j++){

        printf("*");
    }

    for(int k=1;k<=nsp;k++){

    printf(" ");

    }

    for(int j=1;j<=nst;j++){

        printf("*");
    }

nst--;
nsp+2;

printf("\n");
}

    return 0;

}