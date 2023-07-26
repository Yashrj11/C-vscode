#include <stdio.h>

int main()
{

    int n;

    printf("enter percentage:\n");
    scanf("%d", &n);

    // more than 80 a
    // more than 60 b
    //  more than 40 c
    //  more than 40 d

    if (n>80)
    {
        printf("a grade\n");
    }

    else
    {

        if (n>60)
        {

            printf("b grade\n");
        }

        else
        {
            if(n>40){
            
            printf("c grade\n");

            }

            else{

            printf("d grade\n");
        }
        
        }
    }

    return 0;
}