// 1. Modify the above programs to find the second largest and second smallest elements in the array.

#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[] = {10, 21, 33, 40, 55, 60, 73};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = INT_MIN, min = INT_MAX;
    int secMax = INT_MIN, secMin = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // Update max and secMax
        if (arr[i] > max)
        {
            secMax = max;
            max = arr[i];
        }
        else if (arr[i] > secMax && arr[i] != max)
        {
            secMax = arr[i];
        }

        // Update min and secMin
        if (arr[i] < min)
        {
            secMin = min;
            min = arr[i];
        }
        else if (arr[i] < secMin && arr[i] != min)
        {
            secMin = arr[i];
        }
    }

    if (secMax == INT_MIN)
        printf("No second maximum value exists.\n");
    else
        printf("The second largest element is %d\n", secMax);

    if (secMin == INT_MAX)
        printf("No second minimum value exists.\n");
    else
        printf("The second smallest element is %d\n", secMin);

    return 0;
}