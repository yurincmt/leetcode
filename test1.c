#include <stdio.h>
#include <stdlib.h>

void change_addr(int** a, int* b) {
    *a = b;
}

int main(int argc, char const *argv[])
{
    int arr[4] = {0};
    int* ptr = arr;
    char* nick = "thrxshxll";

    // printf("%d ", *ptr);
    // ptr++;
    // printf("%d ", *ptr);
    // ptr++;
    // printf("%d ", *ptr);
    // return 0;

    while (*nick != '\0') {
        // printf("%d ", *ptr);
        putchar(*nick);
        nick++;
    }
    
    return 0;
}
