#include <stdio.h>
#include <stdlib.h>

#define SORT_TYPE int
#define SORT_NAME my
#include "sort/sort.h"

void insertionSort(int* arr, int n);

size_t arrlen(int* array) {
    size_t count = 0;

    while (array != NULL) {
        ++array;
        ++count;
    } return count;
}


void arrprint(const int* const array, size_t arraySize) {
    for (size_t a = 0; a < arraySize; ++a) {
        printf("%d, ", array[a]);
    }putchar('\n');
}

void arrstrprint(char** arrstr, size_t arrstrSize) {
    for (size_t a = 0; a < arrstrSize; ++a) {
        puts(arrstr[a]);
    }
}


int countOccur(int* arr, int arrSize, int value) {
    /**
     * Dado um array 'arr' de tamanho 'arrSize' retorna a quantidade
     * de vezes que o elemento 'value' aparece no array.
    */

   insertionSort(arr, arrSize);

    int count = 0;
    for (size_t a = 0; a < arrSize; ++a) {
        if (arr[a] == value) {
            while (arr[a] == value && a < arrSize) {
                ++count;
                ++a;
            } return count;
        }
    } return 0;
}


void insertionSort(int* arr, int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}