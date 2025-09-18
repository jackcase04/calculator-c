#include "calculator.h"

void evaluate_expression(char * arr, int len) {
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

            printf("Found number: %d\n", num);
        } else if (
            item == '+' ||
            item == '-' ||
            item == '*' ||
            item == '/'
        ) {
            printf("%c is a operator\n", item);
        }

        ++i;
    }
}