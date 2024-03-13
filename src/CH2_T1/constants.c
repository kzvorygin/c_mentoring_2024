#include <stdio.h>

// Write a program with a declaration of constants for a length = 10 and a width = 15 
// using 3 ways and display them using printf call.

#define LENGHT 10
#define WIDTH  15

const int length = 10;
const int width  = 15;

typedef enum {
    LENGTH_ENUM = 10,
    WIDTH_ENUM  = 15
} Constant;


int main ( void )
{
    printf("\nMacro definition length = %d, width = %d\n", LENGHT, WIDTH);
    printf("Constant definition length = %d, width = %d\n", length, width);
    printf("Enum definition length = %d, width = %d\n", LENGTH_ENUM, WIDTH_ENUM);

    return 0;
}