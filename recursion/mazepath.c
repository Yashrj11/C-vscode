#include <stdio.h>

int maze(int cr, int cc, int er, int ec)
{

    int downways = 0;
    int rightways = 0;

    if (cr == er && cc == ec)
        return 1;

    if (cr == er)
    { // already down hai ,,,, right jana hai

        rightways += maze(cr, cc + 1, er, ec);
    }

    if (cc = ec)
    {

        // already right corner me hai,,,, down jana hai

        downways += maze(cr + 1, cc, cr, ec);
    }

    if (cr < er && cc < ec)
    {

        rightways += maze(cr, cc + 1, er, ec);

        downways += maze(cr + 1, cc, cr, ec);
    }

    int totalways = rightways + downways;

    return totalways;
}

int main()
{

    int n;

    printf("enter a number of row of maze path:\n");

    scanf("%d", &n);

    int m;

    printf("enter the number of column of maze path:\n");
    scanf("%d", &m);

 
    printf("%d",maze(1,1,n,m));

    return 0;
}