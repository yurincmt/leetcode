#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "auxiliar.h"

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    // int* retInt = malloc(numsSize * sizeof(int));
    int* retInt = calloc(numsSize, sizeof(int));
    *returnSize = numsSize;

    for (size_t a = 0; a < numsSize; ++a) {
        for (size_t b = 0; b < numsSize; ++b) {
            if (nums[b] < nums[a] && a != b) {
                ++retInt[a];
            }
        }
    } return retInt;
}

int main(void) {
    int arr[] = {8,1,2,2,3};
    // char* arr[] = {"xbc","bad","aaaa","cbc"};
    int retsize, size = sizeof(arr) / sizeof(arr[0]);

    int* ans = smallerNumbersThanCurrent(arr, size, &retsize);
    arrprint(ans, retsize);

    return 0;
}