#include <stdio.h>
#include <string.h>

#define NUMBER_OF_CMD_ARG_MIN   1
const int max_length_name = 255;

int main (int argc, char** argv)
{
    char name[max_length_name];
    if(argc < NUMBER_OF_CMD_ARG_MIN) {
        printf("Error reading the cmd filename\n\n");
    } else {
        char *arg_name = argv[0];
        printf("Original name of binary file is \'%s\'\n", arg_name);
        char *last_pos_dot = strrchr(arg_name, '.');
        if(last_pos_dot == NULL)
            last_pos_dot = arg_name + strlen(arg_name);

        char *last_pos_separator = strrchr(arg_name, '/');
        if(last_pos_separator == NULL)
            last_pos_separator = arg_name;
        else 
            last_pos_separator++;

        size_t length_to_copy = (size_t)(last_pos_dot - last_pos_separator);
        if(length_to_copy > max_length_name)
            length_to_copy = max_length_name;

        memcpy(name, last_pos_separator, length_to_copy);
        printf("Name of binary file is \'%s\'\n", name);
    }

    return 0;
}
