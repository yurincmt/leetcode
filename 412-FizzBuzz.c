#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** fizzBuzz(int n, int* returnSize){

    char** M = malloc(n * sizeof(char*));
    char aux[9];

    for(int a = 1; a <= n; a++){

        if(a % 3 == 0 && a % 5 == 0){
            sprintf(aux, "FizzBuzz");

        }else if(a % 3 == 0){
            sprintf(aux, "Fizz");

        }else if(a % 5 == 0){
            sprintf(aux, "Buzz");

        }else {
            sprintf(aux, "%d", a);
        }
        M[a-1] = malloc(sizeof(aux));
        sprintf(M[a-1], "%s", aux);
        memset(aux, 0, 9);
    }
    *returnSize = n;
    return M;
}

int main(int argc, char const *argv[])
{
    char** N = NULL;
    int n = 15, returnSize;

    N = fizzBuzz(n, &returnSize);
    for(int a = 0; a < n; a++){
        puts(N[a]);
    }
    free(N);
    
    return 0;
}