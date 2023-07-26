#include<stdio.h>


    int main(){

    int n;

    int nsp=3;
    int nst=1;


printf("enter number of rows and column :\n");
scanf("%d",&n);

for(int i=1;i<=n;i++){


for(int k=1;k<=nsp;k++){

    printf(" ");
}
nsp=nsp-1;


for(int j=1;j<=nst;j++){

    printf("*");

}

nst =nst+2;


}
    return 0;

}