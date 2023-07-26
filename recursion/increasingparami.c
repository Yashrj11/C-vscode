#include<stdio.h>

void increasing(int x,int n ){

if(x>n) return ;

printf("%d\n",x);

increasing(x+1,n);

return ;

}

   int main(){

int a,n;

printf("enter a start number:\n");
scanf("%d",&a);


printf("enter a  end number:\n");
scanf("%d",&n);

increasing(a,n);


    return 0;

}