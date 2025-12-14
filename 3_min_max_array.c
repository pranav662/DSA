#include <stdio.h>

int main() {
    // Program created by: Pranav Shingne
    int arr[50], n, i;
    int smallest, largest;

    printf("Program by: Pranav Shingne\n\n");

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize smallest and Largest
    smallest = largest = arr[0];

    // Traverse to find smallest and Largest
    for(i = 1; i < n; i++) {
        if(arr[i] < smallest)
            smallest = arr[i];
        if(arr[i] > largest)
            largest = arr[i];
    }

    // Output results
    printf("\nSmallest element = %d\n", smallest);
    printf("Largest element = %d\n", largest);
    printf("\n-- Program executed by Pranav Shingne --\n");

    return 0;
}