#include<stdio.h>


    int main(){

int n,r;

int nfact=1;
int rfact=1;
int nrfact=1;

printf("enter n  :\n");
scanf("%d",&n);

printf("enter r:\n");
scanf("%d",&r);

for(int i=1;i<=n;i++){

    nfact=nfact*i;

}

for(int i=1;i<=r;i++){

    rfact=rfact*i;

}

for(int i=2;i<=n-r;i++){

    nrfact=nrfact*i;

}

int ncr=nfact/(rfact*nrfact);


printf("ncr is:%d",ncr);

    return 0;

}