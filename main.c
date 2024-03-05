#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "auxiliar.h"

typedef struct {
    int t[10000];
    int timeFrame;
} RecentCounter;


RecentCounter* recentCounterCreate() {
    RecentCounter* new = malloc(sizeof(RecentCounter));
    new->timeFrame = 3000;
    return new;
}

int recentCounterPing(RecentCounter* obj, int t) {
    static int count = 0;
    int lastRequests = 0;
    
    obj->t[count++] = t;
    for (int a = count-1; a >= 0; --a) {
        if ((t - obj->timeFrame) <= obj->t[a] && obj->t[a] <= t) { // verifica se as requisições anteriores estão no intervalo da atual
            lastRequests += 1;
        } else {
            break;
        }
    }
    return lastRequests;
}

void recentCounterFree(RecentCounter* obj) {
    free(obj);
    // obj = NULL;
}

/**
 * Your RecentCounter struct will be instantiated and called as such:
 * RecentCounter* obj = recentCounterCreate();
 * int param_1 = recentCounterPing(obj, t);
 
 * recentCounterFree(obj);
*/


int main(void) {
    // // int arr[] = {8,1,2,2,3};
    // char* arr[] = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    // int retsize, size = sizeof(arr) / sizeof(arr[0]);

    RecentCounter* obj = recentCounterCreate();
    
    printf("%d\n", recentCounterPing(obj, 1));
    printf("%d\n", recentCounterPing(obj, 100));
    printf("%d\n", recentCounterPing(obj, 3001));
    printf("%d\n", recentCounterPing(obj, 3002));

    recentCounterFree(obj);
 

    
    return 0;
}