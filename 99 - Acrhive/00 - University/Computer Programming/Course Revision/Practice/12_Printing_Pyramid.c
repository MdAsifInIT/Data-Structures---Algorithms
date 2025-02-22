/*

Write a program to display the following output

1
2	2
3	3	3
4	4   4	4

( For ‘n’ lines, n is an input)

*/

#include <stdio.h>

void hpir(int);
void hpir(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}

int main()
{
    hpir(4);
    return 0;
}