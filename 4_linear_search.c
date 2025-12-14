#include <stdio.h>

int main() {
    // Program by: Pranav Shingne
    int arr[50], n, i, key, found = 0;

    printf("Program executed by: Pranav Shingne\n\n");

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element to search: ");
    scanf("%d", &key);

    // Linear Search
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("\nElement %d found at position %d.\n", key, i + 1);
    else
        printf("\nElement %d not found in the array.\n", key);

    printf("\n-- Search completed by Pranav Shingne --\n");

    return 0;
}