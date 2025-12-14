#include <stdio.h>

int main() {
// Program by: Pranav Shingne
int arr[50], n, i;

printf("Program by: Pranav Shingne\n\n");

printf("Enter number of elements:\n");
scanf("%d", &n);

printf("Enter %d elements:\n", n);
for(i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}

printf("\nYou entered these elements:\n");
for(i = 0; i < n; i++) {
printf("%d ", arr[i]);
}

printf("\n\nThank you, Pranav Shingne!\n");

return 0;
}