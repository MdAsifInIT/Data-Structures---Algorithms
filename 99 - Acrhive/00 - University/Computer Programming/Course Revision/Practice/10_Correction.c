#include <stdio.h>

void main()
{

    int i, j = 1;

    // for (i = 1, j++; i + j < 12; i += j++)
    // {
    //     i--;
    //     j *= 2;
    // }

    i = 1, j++;

    while (i + j < 12)
    {
        i--;
        j *= 2;

        i += j++;
    }

    printf("%d %d \n", i, j);
}