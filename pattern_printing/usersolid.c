#include<stdio.h>


    int main(){

int n,m;

printf("enter number of rows:\n");
scanf("%d",&n);


printf("enter number of columns:\n");
scanf("%d",&m);

for(int i=1;i<=n;i++){

    for(int i=1;i<=m;i++){

        printf("*");
    }
     printf("\n");
}
    return 0;

}