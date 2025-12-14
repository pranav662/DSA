#include <stdio.h>

// Program by: Pranav Shingne

void display(int num) {
    if(num == 0)
        return;

    display(num - 1); // Recursive call
    printf("%d ", num);
}

int main() {
    printf("Program executed by: Pranav Shingne\n\n");
    int n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("\nNumbers from 1 to %d are:\n", n);
    display(n);

    printf("\n\n-- Recursive program by Pranav Shingne --\n");
    return 0;
}