/* Experiment: 6a - Binary Search Tree | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>
#include <stdlib.h>

/* BST node */
typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
} Node;

/* Create a new BST node */
Node *createNode(int data) {
    Node *n = (Node *)malloc(sizeof(Node));
    n->data  = data;
    n->left  = NULL;
    n->right = NULL;
    return n;
}

/* Insert a value into the BST */
Node *insert(Node *root, int data) {
    if (root == NULL) return createNode(data);
    if (data < root->data)  root->left  = insert(root->left,  data);
    else if (data > root->data) root->right = insert(root->right, data);
    return root;
}

/* Inorder traversal: left, root, right */
void inorder(Node *root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

/* Preorder traversal: root, left, right */
void preorder(Node *root) {
    if (root == NULL) return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

/* Postorder traversal: left, right, root */
void postorder(Node *root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

/* Find smallest node (leftmost) */
Node *findMin(Node *root) {
    while (root->left != NULL) root = root->left;
    return root;
}

/* Find largest node (rightmost) */
Node *findMax(Node *root) {
    while (root->right != NULL) root = root->right;
    return root;
}

/* Count total nodes in BST */
int countNodes(Node *root) {
    if (root == NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

/* Search for a value in BST */
int search(Node *root, int key) {
    if (root == NULL) return 0;
    if (root->data == key) return 1;
    if (key < root->data) return search(root->left, key);
    return search(root->right, key);
}

/* Free all nodes */
void freeTree(Node *root) {
    if (root == NULL) return;
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

int main(void) {
    int values[] = {50, 30, 70, 20, 40, 60, 80, 10};
    int n = 8;
    Node *root = NULL;

    for (int i = 0; i < n; i++) {
        root = insert(root, values[i]);
    }

    printf("===== BINARY SEARCH TREE =====\n\n");

    printf("Inorder   : ");  inorder(root);   printf("\n");
    printf("Preorder  : ");  preorder(root);  printf("\n");
    printf("Postorder : ");  postorder(root); printf("\n");

    printf("\nSmallest  : %d\n", findMin(root)->data);
    printf("Largest   : %d\n",   findMax(root)->data);
    printf("Node count: %d\n",   countNodes(root));

    printf("\nSearch 60 -> %s\n", search(root, 60) ? "Found" : "Not found");
    printf("Search 65 -> %s\n",  search(root, 65) ? "Found" : "Not found");

    freeTree(root);
    return 0;
}
