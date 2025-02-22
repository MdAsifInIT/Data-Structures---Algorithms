#include <stdio.h>

float power(float a, int b)
{
    int c = a;
    for (int i = 1; i < b; i++)
    {
        a = a * c;
    }
    return a;
}

int main()
{
    float d = power(6.1, 1);
    printf("%f \n", d);

    return 0;
}