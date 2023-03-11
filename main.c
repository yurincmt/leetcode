#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


bool isPalindrome(int x){
    char* buffer = NULL;

    while(x > 0){
        buffer = realloc(buffer, sizeof(buffer) + 1);
        buffer
        x /= 10;
    }

    free(buffer);
}


int main(int argc, char const *argv[])
{

    return 0;
}