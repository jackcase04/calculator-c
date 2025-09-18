#include "calculator.h"

int evaluate_expression(char * arr, int len) {
    IntStack numbers;
    CharStack operations;

    init_int_stack(&numbers);
    init_char_stack(&operations);
    
    int i = 0;

    while (i < len) {
        char item = arr[i];

        if (item >= '0' && item <= '9') {
            int num = 0;

            while (item >= '0' && item <= '9') {
                num = num * 10 + (item - '0');
                ++i;
                item = arr[i];
            }

            --i;

            push_int(&numbers, num);

        } else if (
            item == '+' ||
            item == '-' ||
            item == '*' ||
            item == '/'
        ) {

            while (!is_empty_char(&operations) && precedence(peek_char(&operations)) >= precedence(item)) {
                // We must evalute that operation now.
                int op = pop_char(&operations);

                int first_num = pop_int(&numbers);
                int second_num = pop_int(&numbers);

                int result = apply_operator(first_num, second_num, op);
                printf("Doing operation %d %c %d = %d\n", first_num, op, second_num, result);

                push_int(&numbers, result);
            }

            push_char(&operations, item);
        }

        ++i;
    }

    while (!is_empty_char(&operations)) {
        int op = pop_char(&operations);

        int first_num = pop_int(&numbers);
        int second_num = pop_int(&numbers);

        int result = apply_operator(first_num, second_num, op);
        printf("Doing operation %d %c %d = %d\n", first_num, op, second_num, result);

        push_int(&numbers, result);
    }

    return pop_int(&numbers);
}

int precedence(char op) {
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

int apply_operator(int a, int b, char op) {
    switch(op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
    }

    return 0;
}