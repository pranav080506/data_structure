/* Experiment: 6d - Expression Tree | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* Tree node for expression tree */
typedef struct Node {
    char data;
    struct Node *left;
    struct Node *right;
} Node;

/* Create a new expression tree node */
Node *createNode(char data) {
    Node *n = (Node *)malloc(sizeof(Node));
    n->data  = data;
    n->left  = NULL;
    n->right = NULL;
    return n;
}

/* Node stack for building the expression tree */
#define MAX 50
Node *stack[MAX];
int top = -1;

void push(Node *n) { stack[++top] = n; }
Node *pop(void)    { return stack[top--]; }

/* Build expression tree from postfix expression */
Node *buildExprTree(const char *postfix) {
    top = -1;
    for (int i = 0; postfix[i] != '\0'; i++) {
        char ch = postfix[i];
        Node *node = createNode(ch);
        if (isalpha(ch)) {
            push(node);
        } else {
            node->right = pop();
            node->left  = pop();
            push(node);
        }
    }
    return pop();
}

/* Print infix expression (with parentheses) */
void printInfix(Node *root) {
    if (root == NULL) return;
    if (root->left != NULL) printf("(");
    printInfix(root->left);
    printf("%c", root->data);
    printInfix(root->right);
    if (root->right != NULL) printf(")");
}

/* Print prefix expression */
void printPrefix(Node *root) {
    if (root == NULL) return;
    printf("%c", root->data);
    printPrefix(root->left);
    printPrefix(root->right);
}

/* Print postfix expression */
void printPostfix(Node *root) {
    if (root == NULL) return;
    printPostfix(root->left);
    printPostfix(root->right);
    printf("%c", root->data);
}

/* Free expression tree */
void freeTree(Node *root) {
    if (root == NULL) return;
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

int main(void) {
    const char *postfix = "ab+cd-*";
    Node *root = buildExprTree(postfix);

    printf("===== EXPRESSION TREE =====\n\n");
    printf("Postfix input : %s\n\n", postfix);

    printf("Infix  : "); printInfix(root);  printf("\n");
    printf("Prefix : "); printPrefix(root); printf("\n");
    printf("Postfix: "); printPostfix(root); printf("\n");

    freeTree(root);
    return 0;
}
