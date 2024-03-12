#include <stdio.h>

float convert_from_fahrenheits_to_celsius( const float t ) 
{
    return (t - 32) *  5 / 9;
}

int main (int argc, char** argv)
{
    if(argc < 1) {
        printf("Error reading the cmd filename\n\n");
    } else {
        printf("Name of binary file is %s\n\n", argv[0]);
    }

    float temperature_fahr = 0.;
    printf("Enter a number, which you would like to convert from Fahrenheits to Celsius\n");
    if (1 == scanf("%f", &temperature_fahr) )
    {
        printf("In celsius: %f\n\n", convert_from_fahrenheits_to_celsius(temperature_fahr));
    }
    else
    {
        printf("Error in input value");
    }
    return 0;
}