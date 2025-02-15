#include <stdio.h>
#include <math.h>

int main()
{
    int m, n;
    printf("Enter a Number \n");
    scanf("%d", &n);

    if (n < 0)
    {
        n = -n;
    }

    printf("%d \n", n);

    int originalnum = n;
    int reversenum = 0, remainder;

    while (n != 0)
    {
        remainder = n % 10;
        reversenum = reversenum * 10 + remainder;
        n = n / 10;
    }

    originalnum == reversenum ? printf("The number is Palindrome \n") : printf("The number is not Palindrome");

    return 0;
}