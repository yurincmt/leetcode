int* buildArray(int* nums, int numsSize, int* returnSize) {
    int* ans = malloc(numsSize * sizeof(int));
    *returnSize = 0;

    for (int a = 0; a < numsSize; ++a) {
        ans[a] = nums[nums[a]];
        *returnSize += 1;
    } return ans;
}