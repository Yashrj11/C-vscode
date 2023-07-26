#include<stdio.h>

int main(){

int n;

printf("\nenter any number:\n");
scanf("%d",&n);

if (n%2==0){

    printf("\nentered number is even ");
}

else {

    printf("odd number");
}
// if (n%2!=0){

//     printf("\nentered number is odd");
// }

return 0;

}