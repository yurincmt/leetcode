#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "algorithm.c"

int main(void) {

    int* arr = malloc(8 * sizeof(int));
    // int arr[] = {1,1,1,1,1,1,1,1};
    // char arr[] = "abcdef";

    arrprint(arr, 8);

    memset(arr, -1, 8*sizeof(int));

    arrprint(arr, 8);
    
    return 0;
}