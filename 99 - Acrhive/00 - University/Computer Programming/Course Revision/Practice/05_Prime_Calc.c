#include <stdio.h>

int main()
{
    int num;
    printf("Enter a Number:\n");
    scanf("%d", &num);
    if (num < 2)
    {
        printf("Not prime\n");
        return 0;
    }
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
        {
            printf("Not prime\n");
            return 0;
        }
    printf("Prime\n");
    return 0;
}