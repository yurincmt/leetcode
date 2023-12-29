#include <stdio.h>
#include <stdlib.h>


int function (int n) {
    printf("%d", n);
    if (n <= 0)
        return 0;
    else
        putchar(',');
        function(n-1);
}


void arrprint(int* arr, int arrSize) {
    static int count = 0;
    if (count == arrSize -1) {
        printf("%d]\n", arr[count]);
    } else {
        if (count == 0)
            printf("arr = [");

        printf("%d, ", arr[count++]);
        arrprint(arr, arrSize);
    }
}