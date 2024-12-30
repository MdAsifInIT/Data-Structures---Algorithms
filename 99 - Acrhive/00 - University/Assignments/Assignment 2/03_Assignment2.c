// 3. Write a program to count the number of times a specific element appears in an array
#include <stdio.h>

int main() {
    int arr[] = {9, 8, 2, 2, 9, 3, 7, 8, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target, count = 0;

    printf("Enter the element to count: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    printf("Element %d appears %d times in the array\n", target, count);
    return 0;
}