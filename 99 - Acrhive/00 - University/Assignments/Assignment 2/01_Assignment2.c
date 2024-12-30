// 1. Write a C program to reverse an array of integers

#include <stdio.h>

int main()
{
    int numbers[] = {9, 7, 5, 3, 1};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    int left = 0, right = length - 1;
    printf("Original array: ");
    for (int i = 0; i < length; i++)
        printf("%d ", numbers[i]);
    printf("\n");
    while (left < right)
    {
        int temp = numbers[left];
        numbers[left] = numbers[right];
        numbers[right] = temp;
        left++;
        right--;
    }
    printf("Reversed array: ");
    for (int i = 0; i < length; i++)
        printf("%d ", numbers[i]);
    printf("\n");
    return 0;
}