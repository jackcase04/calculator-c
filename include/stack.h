#ifndef STACK_H
#define STACK_H

#define MAX_STACK 100

// Here, top is basically a counter what index the "top" is
typedef struct {
    int data[MAX_STACK];
    int top;
} IntStack;

void init_int_stack(IntStack *s);

int is_empty_int(IntStack *s);

int is_full_int(IntStack *s);

// Increments top, then adds the value to the data array at the index of top
void push_int(IntStack *s, int value);

int pop_int(IntStack *s);

int peek_int(IntStack *s);

typedef struct {
    char data[MAX_STACK];
    int top;
} CharStack;

void init_char_stack(CharStack *s);

int is_empty_char(CharStack *s);

int is_full_char(CharStack *s);

void push_char(CharStack *s, char value);

char pop_char(CharStack *s);

char peek_char(CharStack *s);

#endif