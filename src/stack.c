#include "stack.h"
#include "stdio.h"

void init_int_stack(IntStack *s) {
    s->top = -1;
}

int is_empty_int(IntStack *s) {
    return s->top == -1;
}

int is_full_int(IntStack *s) {
    return s->top == MAX_STACK - 1;
}

void push_int(IntStack *s, int value) {
    if (!is_full_int(s)) {
        s->data[++s->top] = value;
    } else {
        printf("Error: Number Stack Overflow\n");
    }
}

int pop_int(IntStack *s) {
    if (!is_empty_int(s)) {
        int item = s->data[s->top];
        --s->top;
        return item;
    } else {
        printf("Error: Stack already empty\n");
        return 0;
    }
}

int peek_int(IntStack *s) {
    if (!is_empty_int(s)) {
        return s->data[s->top];
    } else {
        printf("Error: Stack is empty\n");
        return 0;
    }
}

void init_char_stack(CharStack *s) {
    s->top = -1;
}

int is_empty_char(CharStack *s) {
    return s->top == -1;
}

int is_full_char(CharStack *s) {
    return s->top == MAX_STACK - 1;
}

void push_char(CharStack *s, char value) {
    if (!is_full_char(s)) {
        s->data[++s->top] = value;
    } else {
        printf("Error: Operator stack overflow\n");
    }
}

char pop_char(CharStack *s) {
    if (!is_empty_char(s)) {
        int item = s->data[s->top];
        --s->top;
        return item;
    } else {
        printf("Error: Operator stack is empty\n");
        return 0;
    }
}

char peek_char(CharStack *s) {
    if (!is_empty_char(s)) {
        return s->data[s->top];
    } else {
        printf("Error: Operator stack already empty\n");
        return 0;
    }
}