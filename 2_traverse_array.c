#include <stdio.h>

int main() {
// Program created by: Pranav Shingne
int arr[50], n, i;

printf("Program by: Pranav Shingne\n\n");

// Taking number of elements
printf("Enter number of elements: ");
scanf("%d", &n);

// Taking array elements
printf("Enter %d elements:\n", n);
for(i = 0; i < n; i++) {
scanf("%d", &arr[i]);

}

// Traversing and printing array
printf("\nTraversing the array ... \n");
printf("Array elements are:\n");
for(i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n\n -- End of Program by Pranav Shingne -- \n");

return 0;
}