#include<stdio.h>

int main(){

    int n;
    printf("enter a number:\n");
    scanf("%d",&n);

    for(int i=2;i<=n-1;i++)
{

    if(n%i==0){

printf("given number is composite\n");
    
        break;//break nahi lagayga to uppar wali line jitni baar composite hoga utni baaar print hogi
    }
    else {

        printf("given number is not composite\n");
        

        break;////break nahi lagayga to uppar wali line jitni baar composite hoga utni baaar print hogi

    }
}
return 0;
}