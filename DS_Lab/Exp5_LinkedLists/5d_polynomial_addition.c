/* Experiment: 5d - Polynomial Addition | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>
#include <stdlib.h>

/* Node representing a polynomial term: coeff * x^exp */
typedef struct Node {
    int coeff;
    int exp;
    struct Node *next;
} Node;

/* Create a new polynomial term node */
Node *createNode(int coeff, int exp) {
    Node *n = (Node *)malloc(sizeof(Node));
    n->coeff = coeff;
    n->exp   = exp;
    n->next  = NULL;
    return n;
}

/* Append a term to the polynomial list */
void appendTerm(Node **head, int coeff, int exp) {
    Node *newNode = createNode(coeff, exp);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node *curr = *head;
    while (curr->next != NULL) curr = curr->next;
    curr->next = newNode;
}

/* Print a polynomial in human-readable form */
void printPoly(Node *head) {
    if (head == NULL) { printf("0"); return; }
    while (head != NULL) {
        if (head->exp == 0) {
            printf("%d", head->coeff);
        } else if (head->exp == 1) {
            printf("%dx", head->coeff);
        } else {
            printf("%dx^%d", head->coeff, head->exp);
        }
        if (head->next != NULL) printf(" + ");
        head = head->next;
    }
    printf("\n");
}

/* Add two polynomials and return result list */
Node *addPolynomials(Node *p1, Node *p2) {
    Node *result = NULL;
    while (p1 != NULL && p2 != NULL) {
        if (p1->exp > p2->exp) {
            appendTerm(&result, p1->coeff, p1->exp);
            p1 = p1->next;
        } else if (p1->exp < p2->exp) {
            appendTerm(&result, p2->coeff, p2->exp);
            p2 = p2->next;
        } else {
            appendTerm(&result, p1->coeff + p2->coeff, p1->exp);
            p1 = p1->next;
            p2 = p2->next;
        }
    }
    while (p1 != NULL) {
        appendTerm(&result, p1->coeff, p1->exp);
        p1 = p1->next;
    }
    while (p2 != NULL) {
        appendTerm(&result, p2->coeff, p2->exp);
        p2 = p2->next;
    }
    return result;
}

/* Free all nodes in a polynomial list */
void freePoly(Node **head) {
    while (*head != NULL) {
        Node *temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

int main(void) {
    Node *p1 = NULL;
    Node *p2 = NULL;

    /* P1 = 5x^3 + 4x^2 + 2 */
    appendTerm(&p1, 5, 3);
    appendTerm(&p1, 4, 2);
    appendTerm(&p1, 2, 0);

    /* P2 = 3x^3 + 6x + 7 */
    appendTerm(&p2, 3, 3);
    appendTerm(&p2, 6, 1);
    appendTerm(&p2, 7, 0);

    printf("===== POLYNOMIAL ADDITION =====\n\n");
    printf("P1 = ");  printPoly(p1);
    printf("P2 = ");  printPoly(p2);

    Node *result = addPolynomials(p1, p2);
    printf("P1 + P2 = "); printPoly(result);

    freePoly(&p1);
    freePoly(&p2);
    freePoly(&result);
    return 0;
}
