void reverseArray(int nums[], int start, int end) {
    while (start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

void rotate(int nums[], int numsSize, int k) {
    k = k % numsSize;

    // Reverse the entire array
    reverseArray(nums, 0, numsSize - 1);

    // Reverse the first k elements
    reverseArray(nums, 0, k - 1);

    // Reverse the remaining elements
    reverseArray(nums, k, numsSize - 1);
}
