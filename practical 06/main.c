#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int i;
    int min, max, sum;
    float avg;

    // Input values into the array
    printf("Enter 10 integer values:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Find minimum and maximum values
    min = arr[0];
    max = arr[0];
    sum = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
        sum += arr[i];
    }

    // Calculate average value
    avg = (float)sum / 10;
 // Print the minimum, maximum, average values, and reverse order
    printf("\nMinimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Average value: %.2f\n", avg);
    printf("Values in reverse order:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
