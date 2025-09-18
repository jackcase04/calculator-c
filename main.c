#include <stdio.h>
#include <string.h>

int main() {

    char expression[256];
    printf("Enter an expression: ");
    fgets(expression, sizeof(expression), stdin);
    // This basically just replaces the newline with null terminator
    expression[strcspn(expression, "\n")] = '\0';

    printf("You entered: %s\n", expression);
    int len = strlen(expression);
    printf("Size of expression: %zu\n", strlen(expression));

    for (int i = 0; i < len; ++i) {
        printf("%c\n", expression[i]);
    }
    
    return 0;
}