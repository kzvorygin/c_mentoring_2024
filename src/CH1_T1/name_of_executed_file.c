#include <stdio.h>

#define NUMBER_OF_CMD_ARG_MIN   1

int main (int argc, char** argv)
{
    if(argc < NUMBER_OF_CMD_ARG_MIN) {
        printf("Error reading the cmd filename\n\n");
    } else {
        printf("Name of binary file is %s\n\n", argv[0]);
    }

    return 0;
}