/* Experiment: 3d - Balanced Parenthesis | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>
#include <string.h>

#define MAX 100

/* Character stack */
typedef struct {
    char data[MAX];
    int top;
} Stack;

/* Initialize an empty stack */
void initStack(Stack *s) {
    s->top = -1;
}

/* Push a character onto the stack */
void push(Stack *s, char c) {
    s->data[++(s->top)] = c;
}

/* Pop a character from the stack */
char pop(Stack *s) {
    if (s->top == -1) return '\0';
    return s->data[(s->top)--];
}

/* Return matching opening bracket for a closing bracket */
char matchingOpen(char c) {
    if (c == ')') return '(';
    if (c == ']') return '[';
    if (c == '}') return '{';
    return '\0';
}

/* Check if expression has balanced parentheses; return 1 if balanced */
int isBalanced(const char *expr) {
    Stack s;
    initStack(&s);
    int len = (int)strlen(expr);
    for (int i = 0; i < len; i++) {
        char c = expr[i];
        if (c == '(' || c == '[' || c == '{') {
            push(&s, c);
        } else if (c == ')' || c == ']' || c == '}') {
            char top = pop(&s);
            if (top != matchingOpen(c)) {
                return 0;
            }
        }
    }
    return s.top == -1;
}

int main(void) {
    const char *expr1 = "{[(a+b)*(c-d)]/e}";
    const char *expr2 = "{[(a+b)*(c-d])/e}";

    printf("===== BALANCED PARENTHESIS =====\n\n");

    printf("Expression 1: %s\n", expr1);
    printf("Result      : %s\n\n",
           isBalanced(expr1) ? "BALANCED" : "NOT BALANCED");

    printf("Expression 2: %s\n", expr2);
    printf("Result      : %s\n",
           isBalanced(expr2) ? "BALANCED" : "NOT BALANCED");

    return 0;
}
