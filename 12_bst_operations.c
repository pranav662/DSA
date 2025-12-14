#include <stdio.h>
#include <stdlib.h>

// Program by: Pranav Shingne

// Structure of a BST node
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// Function to create a node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert into BST
struct Node* insert(struct Node* root, int value) {
    if(root == NULL)
        return createNode(value);

    if(value < root->data)
        root->left = insert(root->left, value);
    else if(value > root->data)
        root->right = insert(root->right, value);

    return root;
}

// Search in BST
struct Node* search(struct Node* root, int key) {
    if(root == NULL || root->data == key)
        return root;

    if(key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

int main() {
    printf("Program executed by: Pranav Shingne\n\n");
    struct Node* root = NULL;
    int n, value, key, i;

    printf("Enter number of nodes to insert: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &value);
        root = insert(root, value);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &key);

    struct Node* result = search(root, key);

    if(result != NULL)
        printf("\nElement %d found in BST.\n", key);
    else
        printf("\nElement %d NOT found in BST.\n", key);

    printf("\n-- BST operations performed by Pranav Shingne --\n");
    return 0;
}