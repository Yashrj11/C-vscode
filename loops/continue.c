#include <stdio.h>

int main()
{

    int n;

    printf("enter a number:\n");
    scanf("%d", &n);


    for (int i =1; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            continue;
          }
          
          printf("%d ",i);
    }

   
    return 0;
}