#include <stdio.h>
#define NUMBER_OF_PARSED_VALIUES 1

float convert_from_fahrenheits_to_celsius(const float t) 
{
    return (t - 32) *  5 / 9;
}

int main (int argc, char** argv)
{
    float temperature_fahr = 0.;
    printf("Enter a number, which you would like to convert from Fahrenheits to Celsius\n");
    if(scanf("%f", &temperature_fahr) == NUMBER_OF_PARSED_VALIUES)
    {
        printf("In celsius: %f\n\n", convert_from_fahrenheits_to_celsius(temperature_fahr));
    }
    else
    {
        printf("Error in input value");
    }
    return 0;
}