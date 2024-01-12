#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // char* name[4] = {"a", "bc", "def", "ghij"};

    char** name;

    name = malloc(4 * sizeof(char*));

    name[0] = malloc(5 * sizeof(char));
    name[1] = malloc(5 * sizeof(char));
    name[2] = malloc(5 * sizeof(char));
    name[3] = malloc(5 * sizeof(char));
    
    return 0;
}
