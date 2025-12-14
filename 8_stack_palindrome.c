#include <stdio.h>
#include <string.h>

// Program by: Pranav Shingne
#define MAX 100

char stack[MAX];
int top = -1;

// PUSH function
void push(char ch) {
    if(top < MAX - 1) {
        top++;
        stack[top] = ch;
    }
}

// POP function
char pop() {
    if(top >= 0) {
        return stack[top--];
    }
    return '\0';
}

int main() {
    char str[MAX], reversed[MAX];
    int i;

    printf("Program executed by: Pranav Shingne\n\n");

    printf("Enter a string: ");
    scanf("%s", str);

    // Push all characters to stack
    for(i = 0; i < strlen(str); i++) {
        push(str[i]);
    }

    // Pop characters to form reversed string
    for(i = 0; i < strlen(str); i++) {
        reversed[i] = pop();
    }
    reversed[i] = '\0';

    printf("Reversed string: %s\n", reversed);

    // Check palindrome
    if(strcmp(str, reversed) == 0)
        printf("\nThe string is a palindrome.\n");
    else
        printf("\nThe string is NOT a palindrome.\n");

    printf("\n-- Palindrome check performed by Pranav Shingne --\n");

    return 0;
}