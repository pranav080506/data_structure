/* Experiment: 3c - Postfix Evaluation | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>
#include <ctype.h>

#define MAX 50

/* Stack for integers */
typedef struct {
    int data[MAX];
    int top;
} Stack;

/* Initialize an empty stack */
void initStack(Stack *s) {
    s->top = -1;
}

/* Push value onto the stack */
void push(Stack *s, int val) {
    s->data[++(s->top)] = val;
}

/* Pop value from the stack */
int pop(Stack *s) {
    return s->data[(s->top)--];
}

/* Evaluate a postfix expression and return the result */
int evaluatePostfix(const char *expr) {
    Stack s;
    initStack(&s);

    for (int i = 0; expr[i] != '\0'; i++) {
        char ch = expr[i];
        if (isdigit(ch)) {
            push(&s, ch - '0');
        } else {
            int b = pop(&s);
            int a = pop(&s);
            switch (ch) {
                case '+': push(&s, a + b); break;
                case '-': push(&s, a - b); break;
                case '*': push(&s, a * b); break;
                case '/': push(&s, a / b); break;
            }
        }
    }
    return pop(&s);
}

int main(void) {
    const char *expr = "231*+9-";

    printf("===== POSTFIX EVALUATION =====\n");
    printf("Expression : %s\n", expr);
    printf("Evaluation : 2 + (3 * 1) - 9\n");
    printf("Result     : %d\n", evaluatePostfix(expr));

    return 0;
}
