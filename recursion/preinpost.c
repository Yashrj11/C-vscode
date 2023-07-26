#include<stdio.h>

void preinnpost(int n ){

if(n==0)return;

printf("pre %d \n",n);
preinnpost(n-1);
printf("in %d \n",n);
preinnpost(n-1);
printf("post %d \n",n);

return;

}

int main()
{

    int n;
    int b;

    printf("enter a number:\n");
    scanf("%d", &n);
    
  preinnpost(n);
    return 0;

}