#include <stdio.h>

int main()
{
    int i, j;

    for (i = 2; i < 100; i++)
    {
        for (j = 2; j <= (i / j); j++)
            if (!(i % j))
                break; // if factor exists its not a prime

        if (j > (i / j))
            printf("%d is prime\n", i);
    }
};