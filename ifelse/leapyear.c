#include<stdio.h>

int main(){

int n;

printf("enter a year:\n");
scanf("%d",&n);

if(n%400==0 || n%4==0 && n%100!=0)
{

printf("it is lear year\n");

}

else {
    
    printf("it's not lear year");
}
return 0;
}