/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    *returnSize = 2 * numsSize; 
    
    int* ans = malloc(*returnSize * sizeof(int));

    for (size_t a = 0; a < *returnSize; ++a) {
        ans[a] = nums[a % numsSize];
    } return ans;
}