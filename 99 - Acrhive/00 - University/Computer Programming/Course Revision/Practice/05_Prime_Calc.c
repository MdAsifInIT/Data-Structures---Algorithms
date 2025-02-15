// Write a program to check whether a given number is prime or not using loops.
#include <stdio.h>

int main()
{
    int num, not_prime = 0;
    printf("Enter a Number:\n");
    scanf("%d", &num);

    if (num == 0 || num == 1)
    {
        printf("The number is not prime!");
    }

    else
    {

        for (int count = 2; count < num; count++)
        {
            if (num % count == 0 && num != 2)
            {
                not_prime = 1;
                break;
            }
        }

        if (not_prime)
        {
            printf("The number is not Prime!\n");
        }

        else
        {
            printf("The number is prime!");
        }
    }
    return 0;
}