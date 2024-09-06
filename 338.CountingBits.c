#include <stdio.h>
#include <stdlib.h>


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    *returnSize = n + 1;
    int* ans = malloc(*returnSize * sizeof(int));

    while (n > 0) {

        int aux = n;
        while (aux) {
            ans[n] += aux & 1;
            aux = aux >> 1;
        }putchar('\n');
        --n;
    }
    return ans;
}



int main(int argc, char const *argv[])
{
    int n = 5;
    while (n >= 0) {
        int aux = n;
        while (aux) {
            printf("%c", (aux & 1 ? '1' : '0'));
            aux = aux >> 1;
        }putchar('\n');
        --n;
    }
    return 0;
}