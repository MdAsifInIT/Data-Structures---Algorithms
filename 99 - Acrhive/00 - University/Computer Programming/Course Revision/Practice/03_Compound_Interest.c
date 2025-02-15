#include <stdio.h>
#include <math.h>

float CI(float p, float r, int t)
{
    float amount = p * pow((1 + r / 100), t);
    return amount - p;
}

int main()
{
    float p = 100;
    float r = 10;
    int t = 2;
    float ci = CI(p, r, t);

    printf("Compound Interest: %.2f \n", ci);

    return 0;
}