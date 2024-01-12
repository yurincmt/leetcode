#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "algorithm.c"

struct intNode
{
    int num;
    struct intNode* nextPtr;
};


void linkedList_insert(struct intNode* head, int value) {   
    struct intNode* newNode = malloc(sizeof(struct intNode));

    if (newNode == NULL) return;

    newNode->num = value;
    newNode->nextPtr = NULL;

    struct intNode* currentPtr = head;
    struct intNode* before = NULL;
    while (currentPtr != NULL){
        before = currentPtr;
        currentPtr = currentPtr->nextPtr;
    }

    if (before == NULL) {
        head = newNode;
    } else {
        before->nextPtr = newNode;
    }
}


void linkedList_print(struct intNode* head) {
    struct intNode* currentPtr = head;
    while (currentPtr != NULL) {
        printf("%d, ", currentPtr->num);
        currentPtr = currentPtr->nextPtr;
    }putchar('\n');
}


int main(void) {

    struct intNode* head;
    linkedList_insert(head, 0);
    linkedList_insert(head, 1);
    linkedList_insert(head, 2);
    linkedList_insert(head, 3);

    linkedList_print(head);

    
    return EXIT_SUCCESS;
    struct intNode* one = malloc(sizeof(struct intNode));
    struct intNode* two = malloc(sizeof(struct intNode));
    struct intNode* three = malloc(sizeof(struct intNode));

    one->num = 0;
    two->num = 1;
    three->num = 2;

    one->nextPtr = two;
    two->nextPtr = three;
    three->nextPtr = NULL;

    linkedList_print(one);

    return 0;
}