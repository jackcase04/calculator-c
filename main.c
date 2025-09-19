#include <calculator.h>

int main() {

    char expression[256];
    printf("Enter an expression: ");
    fgets(expression, sizeof(expression), stdin);
    // This basically just replaces the newline with null terminator
    expression[strcspn(expression, "\n")] = '\0';

    int len = strlen(expression);

    int i = 0;
    printf("Result is: %d\n", evaluate_expression(expression, &i, len));
    
    return 0;
}