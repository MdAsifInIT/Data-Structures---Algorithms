#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the marks stored in subject 1:\n");
    scanf("%d", &a);
    printf("Enter the marks stored in subject 2:\n");
    scanf("%d", &b);
    printf("Enter the marks stored in subject 3:\n");
    scanf("%d", &c);

    int d = a + b + c;

    if (d >= 270)
        printf("Grade A");
    else if (d >= 240)
        printf("Grade B");
    else if (d >= 210)
        printf("Grade C");
    else if (d >= 180)
        printf("Grade D");
    else
        printf("Grade F");

    return 0;
}