#include<stdio.h>


int power(int a,int b){

if(b==0) return 1;

int recAns= a*power(a,b-1);

return recAns;


}

int main()
{

    int a;
    int b;

    printf("enter a base:\n");
    scanf("%d", &a);

    printf("enter power:\n");
    scanf("%d",&b);
    
    printf("%d raised to the power %d is %d",a,b,power(a,b));

    return 0;

}