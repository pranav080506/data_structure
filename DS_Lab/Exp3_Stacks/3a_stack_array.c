/* Experiment: 3a - Stack using Array | Name: Pranav Gupta | Roll No: 2501921520279
   Branch: CSE-AI | Semester: III | Submitted to: Mohit Kumar
   College: GL Bajaj Institute of Technology and Management */

#include <stdio.h>

#define MAX 50

/* Stack structure using an array */
typedef struct {
    int data[MAX];
    int top;
} Stack;

/* Initialize an empty stack */
void initStack(Stack *s) {
    s->top = -1;
}

/* Check if the stack is full */
int isFull(Stack *s) {
    return s->top == MAX - 1;
}

/* Check if the stack is empty */
int isEmpty(Stack *s) {
    return s->top == -1;
}

/* Push a value onto the stack */
void push(Stack *s, int val) {
    if (isFull(s)) {
        printf("  Stack Overflow! Cannot push %d\n", val);
        return;
    }
    s->data[++(s->top)] = val;
    printf("  Pushed: %d\n", val);
}

/* Pop a value from the stack */
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("  Stack Underflow!\n");
        return -1;
    }
    int val = s->data[(s->top)--];
    printf("  Popped: %d\n", val);
    return val;
}

/* Display all elements from top to bottom */
void display(Stack *s) {
    if (isEmpty(s)) {
        printf("  Stack is empty.\n");
        return;
    }
    printf("  Stack (top -> bottom): ");
    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->data[i]);
    }
    printf("\n");
}

int main(void) {
    Stack s;
    initStack(&s);

    printf("===== STACK USING ARRAY =====\n");

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);

    printf("\nAfter pushing 10, 20, 30, 40:\n");
    display(&s);

    printf("\nPopping twice:\n");
    pop(&s);
    pop(&s);

    printf("\nAfter two pops:\n");
    display(&s);

    return 0;
}
