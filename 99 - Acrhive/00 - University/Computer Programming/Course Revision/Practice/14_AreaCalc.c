#include <stdio.h>

float circlearea(float r)
{
    return (3.14 * r * r);
}

float rectanglearea(float l, float b)
{
    return (l * b);
}

float squarearea(float a)
{
    return (a * a);
}

void scanner(int *ptr)
{
    printf("Choose an option: \n1. Circle \n2. Square \n3. Rectangle \n4. Exit\n");
    scanf("%d", ptr);
}

int main()
{
    int option;
    scanner(&option);

    while (option < 1 || option > 4)
    {
        printf("Please choose the correct option\n");
        scanner(&option);
    }

    float ar;

    switch (option)
    {
    case 1:
    {
        float r;
        printf("Enter the radius: ");
        scanf("%f", &r);
        ar = circlearea(r);
        printf("\n===============================================\n");
        printf("\tArea of Circle\n");
        printf("===============================================\n");
        printf("The radius of the circle is: %.2f\n", r);
        printf("Area of the given circle: %.2f\n", ar);
        printf("===============================================\n");
        break;
    }

    case 2:
    {
        float a;
        printf("Enter the side length: ");
        scanf("%f", &a);
        ar = squarearea(a);
        printf("\n===============================================\n");
        printf("\tArea of Square\n");
        printf("===============================================\n");
        printf("The side length of the square is: %.2f\n", a);
        printf("Area of the given square: %.2f\n", ar);
        printf("===============================================\n");
        break;
    }

    case 3:
    {
        float l, b;
        printf("Enter length and breadth: ");
        scanf("%f %f", &l, &b);
        ar = rectanglearea(l, b);
        printf("\n===============================================\n");
        printf("\tArea of Rectangle\n");
        printf("===============================================\n");
        printf("The length of the rectangle is: %.2f\n", l);
        printf("The breadth of the rectangle is: %.2f\n", b);
        printf("Area of the given rectangle: %.2f\n", ar);
        printf("===============================================\n");
        break;
    }

    case 4:
        printf("Exiting the script!\n");
        return 0;

    default:
        break;
    }

    return 0;
}
