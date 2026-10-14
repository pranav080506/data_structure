/* Experiment: 3e - Infix to Postfix | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

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

/* Check if stack is empty */
int isEmpty(Stack *s) {
    return s->top == -1;
}

/* Push character onto the stack */
void push(Stack *s, char c) {
    s->data[++(s->top)] = c;
}

/* Pop character from the stack */
char pop(Stack *s) {
    if (isEmpty(s)) return '\0';
    return s->data[(s->top)--];
}

/* Peek at top character without removing */
char peek(Stack *s) {
    if (isEmpty(s)) return '\0';
    return s->data[s->top];
}

/* Return operator precedence (higher = binds tighter) */
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

/* Convert infix expression to postfix */
void infixToPostfix(const char *infix, char *postfix) {
    Stack s;
    initStack(&s);
    int j = 0;
    int len = (int)strlen(infix);

    for (int i = 0; i < len; i++) {
        char c = infix[i];
        if (isalpha(c) || isdigit(c)) {
            postfix[j++] = c;
        } else if (c == '(') {
            push(&s, c);
        } else if (c == ')') {
            while (!isEmpty(&s) && peek(&s) != '(') {
                postfix[j++] = pop(&s);
            }
            pop(&s); /* remove '(' */
        } else {
            while (!isEmpty(&s) && peek(&s) != '(' &&
                   precedence(peek(&s)) >= precedence(c)) {
                postfix[j++] = pop(&s);
            }
            push(&s, c);
        }
    }
    while (!isEmpty(&s)) {
        postfix[j++] = pop(&s);
    }
    postfix[j] = '\0';
}

int main(void) {
    const char *infix = "A+B*C-(D/E+F)*G";
    char postfix[MAX];

    infixToPostfix(infix, postfix);

    printf("===== INFIX TO POSTFIX =====\n");
    printf("Infix  : %s\n", infix);
    printf("Postfix: %s\n", postfix);

    return 0;
}
