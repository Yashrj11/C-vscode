#include<stdio.h>


    int main(){


int n;
int st=n;

printf("enter row number:\n");
scanf("%d",&n);

for(int i=1;i<=n;i++){

    for(int j=1;j<=st;j++){

        printf("*");
    }

    for(int k=1;k<=n-i;k++){

    printf(" ");

    }

    for(int j=1;j<=st;j++){

        printf("*");
    }

st--;
n-i+2;

printf("\n");
}

    return 0;

}