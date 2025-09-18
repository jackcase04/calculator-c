#include <string.h>
#include <calculator.h>

int main() {

    char expression[256];
    printf("Enter an expression: ");
    fgets(expression, sizeof(expression), stdin);
    // This basically just replaces the newline with null terminator
    expression[strcspn(expression, "\n")] = '\0';

    printf("You entered: %s\n", expression);
    int len = strlen(expression);

    printf("Result is: %d\n", evaluate_expression(expression, len));
    
    return 0;
}