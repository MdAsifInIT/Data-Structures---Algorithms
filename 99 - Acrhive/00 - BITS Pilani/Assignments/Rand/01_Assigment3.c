#include <stdio.h>

void generateFibonacci(int);
void generateFibonacci(int terms){
    int first = 0, second = 1, next;

    for (int count = 1; count <= terms; count++)
    {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
}

int main()
{
    int numbers[] = {10, 21, 33, 40, 55, 60, 73};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    int total = 0, highest = numbers[0], lowest = numbers[0], evenNumbers = 0, oddNumbers = 0, secondHighest = numbers[0], secondLowest = numbers[0];

    for (int index = 0; index < length; index++)
    {
        total += numbers[index];

        if (numbers[index] > highest)
        {
            secondHighest = highest;
            highest = numbers[index];
        }
        else if (numbers[index] > secondHighest && numbers[index] != highest)
        {
            secondHighest = numbers[index];
        }

        if (numbers[index] < lowest)
        {
            secondLowest = lowest;
            lowest = numbers[index];
        }
        else if (numbers[index] < secondLowest && numbers[index] != lowest)
        {
            secondLowest = numbers[index];
        }

        if (numbers[index] % 2 == 0)
            evenNumbers++;
        else
            oddNumbers++;
    }
    printf("Total: %d\n", total);
    printf("Highest: %d, Second Highest: %d\n", highest, secondHighest);
    printf("Lowest: %d, Second Lowest: %d\n", lowest, secondLowest);
    printf("Even Numbers: %d\n", evenNumbers);
    printf("Odd Numbers: %d\n", oddNumbers);

    // Printing Original Array
    printf("\nOriginal Array: ");
    for (int index = 0; index < length; index++)
    {
        printf("%d ", numbers[index]);
    }

    printf(" \n");

    // Array Reversed using for loop
    printf("\nReversed Array using for loop: ");
    for (int index = 0; index < length; index++)
    {
        printf("%d ", numbers[(length - 1) - index]);
    }

    // Array reversed using while loop
    printf("\nReversed Array using while loop: ");
    int index = 0;
    while (index < length)
    {
        printf("%d ", numbers[(length - 1) - index]);
        index++;
    }

    // Array reversed using do while
    printf("\nReversed Array using do while: ");
    index = 0;
    do
    {
        printf("%d ", numbers[(length - 1) - index]);
        index++;
    } while (index < length);

    printf("\nEnter the number of terms for Fibonacci series: ");
    int terms = 8;
    generateFibonacci(terms);

    return 0;
} 