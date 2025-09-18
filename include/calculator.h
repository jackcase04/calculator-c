#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <stdio.h>
#include <stdbool.h>

#include "stack.h"

int evaluate_expression(char * arr, int len);

int precedence(char op);

int apply_operator(int a, int b, char op);

#endif