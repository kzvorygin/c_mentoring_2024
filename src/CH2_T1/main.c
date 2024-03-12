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
    char x = 'x';
    int five = 5;
    long five_long = 5;
    long long five_ll = 5;
    float five_f = 5.0;
    double five_d = 5.0;
    long double five_dl = 5.0;

    printf (" value %zu = %zu\n", sizeof(5), sizeof(five));
    printf (" value %zu = %zu\n", sizeof(5L), sizeof(five_long));
    printf (" value %zu = %zu\n", sizeof(5LL), sizeof (five_ll ));
    printf (" value %zu = %zu\n", sizeof(5.0), sizeof (five_d));
    printf (" value %zu = %zu\n", sizeof(5.0F), sizeof (five_f));
    printf (" value %zu = %zu\n", sizeof(5.0L), sizeof (five_dl));
    printf (" value %zu = %zu\n", sizeof ('x'), sizeof(x));

    //
    printf("\nMacro definition length = %d, width = %d\n", LENGHT, WIDTH);
    printf("Constant definition length = %d, width = %d\n", length, width);
    printf("Enum definition length = %d, width = %d\n", LENGTH_ENUM, WIDTH_ENUM);

    return 0;
}