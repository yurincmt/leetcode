/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool* retBool = malloc(candiesSize * sizeof(bool));
    *returnSize = candiesSize;

    for (size_t a = 0; a < candiesSize; ++a) {
        int count = 0;
        for (size_t b = 0; b < candiesSize; ++b) {
            if (candies[a] + extraCandies >= candies[b]) {
                ++count;
            }
        }

        if (count == candiesSize) {
            retBool[a] = true;
        } else {
            retBool[a] = false;
        }
    } return retBool;
}