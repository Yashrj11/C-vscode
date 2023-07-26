#include<stdio.h>

void zigzag(int n){
 if(n==0) return ;


 printf(" %d ",n);
 zigzag(n-1);
 printf(" %d ",n);
 zigzag(n-1);
 printf(" %d ",n);
 return;
 

}


 int main()
{

    int n;
    int b;

    printf("enter a number:\n");
    scanf("%d", &n);
    
  zigzag(n);
    return 0;

}