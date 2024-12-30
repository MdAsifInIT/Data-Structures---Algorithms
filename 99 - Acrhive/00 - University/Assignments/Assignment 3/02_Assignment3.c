// 2. Write a C program to reverse the elements of an array using each of the three loop

#include <stdio.h>

int main() {
    int arr[] = {10, 21, 33, 40, 55, 60, 73};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Printing Original Array
    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nReversed Array using for loop: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[(n - 1) - i]);
    }

    printf("\nReversed Array using while loop: ");
    int i = 0;
    while (i < n) {
        printf("%d ", arr[(n - 1) - i]);
        i++;
    }

    printf("\nReversed Array using do while loop: ");
    i = 0;
    do {
        printf("%d ", arr[(n - 1) - i]);
        i++;
    } while (i < n);

    return 0;
}
