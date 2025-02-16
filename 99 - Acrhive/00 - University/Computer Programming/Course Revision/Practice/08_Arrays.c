#include <stdio.h>

int main()
{
    int n, threshold = 5, sum = 0;
    printf("Enter the total number of items. \n");
    scanf("%d", &n);

    int arr[n];

    // (a) Input quantities

    for (int i = 0; i < n; i++)
    {
        printf("Enter the quantity of item no %d:", (i + 1));
        scanf("%d", &arr[i]);
    }

    // (b) Display total quantity

    for (int i = 0; i < n; i++)
    {
        printf("Item No. %d : Quantity - %d \n", (i + 1), arr[i]);
        sum += arr[i];
    }
    printf("Total no of all items = %d \n", sum);

    // (c) Identify items below the threshold - 5

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < threshold)
        {
            printf("Item %d is below threshold, Quantity: %d \n", (i + 1), arr[i]);
        }
    }

    return 0;
}