// 3. Implement a program to find the Fibonacci series up to n terms using iterative
// approach.

#include <stdio.h>

void printFibonacci(int);
void printFibonacci(int n)
{
    int t1 = 0, t2 = 1, nextTerm;

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int main()
{
    int n = 10;
    printf("\nFibonacci Series: ");
    printFibonacci(n);
    return 0;
}