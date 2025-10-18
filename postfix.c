#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = value;
}

int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack[top--];
}

int evaluatePostfix(char *exp) {
	int i;
    for ( i = 0; exp[i] != '\0'; i++) {
        if (isdigit(exp[i])) {
            push(exp[i] - '0');  // Convert char to integer
        } else {
            int operand2 = pop();
            int operand1 = pop();
            switch (exp[i]) {
                case '+': push(operand1 + operand2); break;
                case '-': push(operand1 - operand2); break;
                case '*': push(operand1 * operand2); break;
                case '/': push(operand1 / operand2); break;
            }
        }
    }
    return pop();
}

int main() {
    char expression[] = "231*+9-";  // Example postfix expression
    printf("Result: %d\n", evaluatePostfix(expression));
    return 0;
}
