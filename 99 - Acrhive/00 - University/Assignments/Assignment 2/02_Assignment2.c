#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the element to search: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Element found at index %d\n", i);
            return 0;
        }
    }

    printf("Element not found in the array\n");
    return 0;
}