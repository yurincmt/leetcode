#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "algorithm.c"

struct intNode
{
    int data;
    struct intNode* nextNode;
};


void linkedList_insert(struct intNode** head, int value) {
    struct intNode* newNode = malloc(sizeof(struct intNode));

    if (newNode == NULL) return;

    newNode->data = value;
    newNode->nextNode = NULL;

    struct intNode* currentNode = *head;
    struct intNode* beforeNode = NULL;
    while (currentNode != NULL){
        beforeNode = currentNode;
        currentNode = currentNode->nextNode;
    }

    if (beforeNode == NULL) {
        *head = newNode;
    } else {
        beforeNode->nextNode = newNode;
    }
}


// void linkedList_print(struct intNode* head) {
//     struct intNode* currentPtr = head;
//     while (currentPtr != NULL) {
//         printf("%d, ", currentPtr->data);
//         currentPtr = currentPtr->nextNode;
//     }putchar('\n');
// }

void linkedList_print(struct intNode* head) {
    static int count = 0;
    if (count == 0) {
        printf("[");
    }
    if (head->nextNode == NULL) {
        printf("%d] ¬\n", head->data);
        return;
    }
    printf("%d]-> ", head->data);
    linkedList_print(head->nextNode);
}


int main(void) {

    

    return 0;
}