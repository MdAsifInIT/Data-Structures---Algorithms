#include <stdio.h>

#define THRESHOLD 5 // Define the low-stock threshold

int main()
{
    int n, i, totalQuantity = 0;

    // Ask for the number of items
    printf("Enter the number of items: ");
    scanf("%d", &n);

    int quantities[n]; // Array to store item quantities

    // Input quantities for each item
    for (i = 0; i < n; i++)
    {
        printf("Enter quantity for item %d: ", i + 1);
        scanf("%d", &quantities[i]);
        totalQuantity += quantities[i]; // Calculate total quantity
    }

    // Display total quantity
    printf("\nTotal quantity of all items: %d\n", totalQuantity);

    // Identify and display items with quantity below the threshold
    printf("Items with low stock (below %d):\n", THRESHOLD);
    for (i = 0; i < n; i++)
    {
        if (quantities[i] < THRESHOLD)
        {
            printf("Item %d: Quantity = %d\n", i + 1, quantities[i]);
        }
    }

    return 0;
}