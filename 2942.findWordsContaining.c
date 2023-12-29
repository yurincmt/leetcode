/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int* retarr = NULL;
    *returnSize = 0;

    for (int a = 0; a < wordsSize; ++a) {
        if (strchr(words[a], x) != NULL) {
            *returnSize += 1;
            retarr = realloc(retarr, *returnSize * sizeof(int));
            retarr[*returnSize -1] = a;
        }
    } return retarr;
}