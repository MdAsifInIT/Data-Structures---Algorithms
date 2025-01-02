// 3. Write a C program to calculate the length of a string without using the strlen() function and using strlen() as well.

#include <stdio.h>
#include <string.h> // For strlen()

int calculateLength(const char* str) {
    int length = 0;
    while (str[length] != '\0')
        length++;
    return length;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets input
    str[strcspn(str, "\n")] = '\0';

    // Calculate length without strlen
    int lengthWithoutStrlen = calculateLength(str);
    // Calculate length with strlen
    int lengthWithStrlen = strlen(str);

    printf("Length of the string (without strlen): %d\n", lengthWithoutStrlen);
    printf("Length of the string (with strlen): %d\n", lengthWithStrlen);

    return 0;
}
