/*
Write a program to print first 10 positive even numbers without using any repetitive structure
directly

[Note :- You should not print them directly]
*/

#include <stdio.h>

void printEven(int num, int count)
{
    if (count == 10)
        return; // Base condition: Stop when 10 numbers are printed
    printf("%d ", num);
    printEven(num + 2, count + 1); // Recursive call with next even number
}

int main()
{
    printEven(2, 0); // Start from the first even number (2)
    return 0;
}
