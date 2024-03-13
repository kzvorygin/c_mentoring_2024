#include <stdio.h>

int main(void)
{
    const char x = 'x';
    const int five = 5;
    const long five_long = 5;
    const long long five_ll = 5;
    const float five_f = 5.0;
    const double five_d = 5.0;
    const long double five_dl = 5.0;

    printf (" value %zu = %zu\n", sizeof(5), sizeof(five));
    printf (" value %zu = %zu\n", sizeof(5L),  sizeof(five_long));
    printf (" value %zu = %zu\n", sizeof(5LL), sizeof(five_ll));
    printf (" value %zu = %zu\n", sizeof(5.0),  sizeof(five_d));
    printf (" value %zu = %zu\n", sizeof(5.0F), sizeof(five_f));
    printf (" value %zu = %zu\n", sizeof(5.0L), sizeof(five_dl));
    printf (" value %zu = %zu\n", sizeof ('x'), sizeof(x));


    return 0;
}