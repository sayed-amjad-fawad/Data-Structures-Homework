/* * HW 03: Shunting Yard Algorithm (Infix to Postfix)
 * * Complexity:
 * - Time: O(n) because we scan each character in the string once.
 * - Space: O(n) for the stack that holds operators.
 */

#include <stdio.h>
#include <ctype.h>

// Helper to check how "important" an operator is
int getRank(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

int main() {
    char infix[] = "A+B*(C-D)";
    char stack[50];
    int top = -1;

    printf("Infix Expression: %s\n", infix);
    printf("Postfix Result: ");

    for (int i = 0; infix[i] != '\0'; i++) {
        char c = infix[i];

        // If it's a letter or number, print it right away
        if (isalnum(c)) {
            printf("%c", c);
        } 
        // Start of a group
        else if (c == '(') {
            stack[++top] = c;
        } 
        // End of a group: pop everything until we find '('
        else if (c == ')') {
            while (top != -1 && stack[top] != '(') {
                printf("%c", stack[top--]);
            }
            top--; // remove the '(' from stack
        } 
        // It's an operator (+, -, *, /)
        else {
            while (top != -1 && getRank(stack[top]) >= getRank(c)) {
                printf("%c", stack[top--]);
            }
            stack[++top] = c;
        }
    }

    // Clean out the rest of the stack
    while (top != -1) {
        printf("%c", stack[top--]);
    }
    printf("\n");

    return 0;
}
