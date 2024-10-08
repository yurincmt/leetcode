#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "auxiliar.h"


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    *returnSize = n + 1;
    int* ans = calloc(*returnSize, sizeof(int));

    while (n > 0) {

        int aux = n;
        while (aux) {
            ans[n] += aux & 1;
            aux = aux >> 1;
        };
        --n;
    }
    return ans;
}


int main(void) {

    int returnsize;
    int *arr = countBits(2, &returnsize);
    arrprint(arr, returnsize);
    
    return 0;
}