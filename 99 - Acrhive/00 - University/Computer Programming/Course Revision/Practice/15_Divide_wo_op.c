#include <stdio.h>

int main()
{
    int n, result;

    printf("Enter a Number \n");
    scanf("%d", &n);

    result = n >> 1;

    printf("%d \n", result);

    return 0;
}