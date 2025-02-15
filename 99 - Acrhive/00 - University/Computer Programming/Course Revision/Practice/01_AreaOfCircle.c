#include <stdio.h>

int main()
{
    float r, pi = 3.1416;
    printf("Enter the radius: ");
    scanf("%f", &r);

    float area;
    area = pi * r * r;

    printf("The area is %.2f sq. units. \n", area);

    return 0;
}