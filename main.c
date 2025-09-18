#include <stdio.h>
#include <stdint.h>

int main() {

    int x = 6756;

    printf("X is: %d\n", x);

    int result = 0;

    while (x > 0) {
        int digit = x % 10;
        result += digit;
        x /= 10;
    }

    printf("Summation of all X's digits: %d\n", result);
    
    return 0;
}