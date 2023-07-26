#include<stdio.h>


int powerlog(int a,int b){

if(b==0) return 1;


if(b%2==0){
// even 

return powerlog(a,b/2)*powerlog(a,b/2);

}

else{
//odd 

return powerlog(a,b/2)*powerlog(a,b/2)*a;



}

}

int main()
{

    int a;
    int b;

    printf("enter a base:\n");
    scanf("%d", &a);

    printf("enter power:\n");
    scanf("%d",&b);
    
    printf("%d raised to the power %d is %d",a,b,powerlog(a,b));

    return 0;

}