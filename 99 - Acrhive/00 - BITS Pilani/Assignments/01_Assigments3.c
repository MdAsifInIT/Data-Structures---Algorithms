// Lab Exercises:
// 1. Modify the above programs to find the second largest and second smallest
// elements in the array.
// 2. Write a C program to reverse the elements of an array using each of the three loop
// constructs (for, while, and do-while).
// 3. Implement a program to find the Fibonacci series up to n terms using iterative
// approach.

#include <stdio.h>

void printFibonacci(int);
void printFibonacci(int n){
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
    int arr[] = {10, 21, 33, 40, 55, 60, 73};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0, max = arr[0], min = arr[0], evenCount = 0, oddCount = 0, secMax = arr[0], secMin = arr[0];

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (arr[i] > max)
        {
            secMax = max;
            max = arr[i];
        }
        else if ((arr[i] > secMax) && (arr[i] != max))
        {
            secMax = arr[i];
        }

        if (arr[i] < min)
        {
            secMin = min;
            min = arr[i];
        }
        else if (arr[i] < secMin && arr[i] != min)
        {
            secMin = arr[i];
        }

        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    printf("Sum: %d\n", sum);
    printf("Max: %d, Second Max: %d\n", max, secMax);
    printf("Min: %d, Second Min: %d\n", min, secMin);
    printf("Even Count: %d\n", evenCount);
    printf("Odd Count: %d\n", oddCount);

    // Printing Original Array
    printf("\nOriginal Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf(" \n");

    // Array Reversed using for loop
    printf("\nReversed Array using for loop: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[(n - 1) - i]);
    }

    // Array reversed using while loop
    printf("\nReversed Array using while loop: ");
    int i = 0;
    while (i < n)
    {
        printf("%d ", arr[(n - 1) - i]);
        i++;
    }

    // Array reversed using do while
    printf("\nReversed Array using do while: ");
    i = 0;
    do
    {
        printf("%d ", arr[(n - 1) - i]);
        i++;
    } while (i < n);

    // Printing Fibonacci Series
    n = 10;
    printf("\nFibonacci Series: ");
    printFibonacci(n);
    return 0;
}