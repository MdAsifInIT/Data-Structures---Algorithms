// 2. Write a C program to compare two strings without using the strcmp function.

#include <stdio.h>
#include <string.h>

int compareStrings(const char* str1, const char* str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2)
            return *str1 - *str2;
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    int result = compareStrings(str1, str2);
    if (result == 0)
        printf("The strings are equal.\n");
    else if (result < 0)
        printf("The first string is lexicographically smaller.\n");
    else
        printf("The first string is lexicographically larger.\n");

    return 0;
}
