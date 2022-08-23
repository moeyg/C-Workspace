// Function (함수)

#include <stdio.h>

// Prototyping, Function declaration
void greeting(void);

int main() 
{
    greeting();
    greeting();
    greeting();
}

// Function definition
void greeting(void) 
{
    printf("Hello World!\n");

    return;
}