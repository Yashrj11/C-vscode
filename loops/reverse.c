#include<stdio.h>


    int main(){

        int n;

        printf("enter a number:\n");
        scanf("%d",&n);

        int r=0;

        while(n>0){

            r=r*10;
            r=r+(n%10);
            
            r=n/10;

            

        }

        printf("the reverse number is %d",r);

int sum=0;

        while(r!=0){

 int    lastdigit=r%10;
   int  sum=sum+lastdigit;
   int  r=r/10;


    
}
printf("sum of reverse number is %d",sum);

return 0;


    }