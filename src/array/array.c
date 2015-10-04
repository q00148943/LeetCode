#include <stdio.h>
#include <stdlib.h>

#include "array.h"

char** summaryRanges(int* nums, int numsSize, int* returnSize)
{
    
    return NULL;
}

int removeDuplicates(int* nums, int numsSize)
{
    if ((nums == NULL) || (numsSize == 0)) {
        return 0;
    }

    int elem = nums[0];
    int idx  = 1;
    
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != elem) {
            nums[idx++] = nums[i];
            elem = nums[i];
        }
    }

    return idx;
}

int removeElement(int* nums, int numsSize, int val)
{
    if ((nums == NULL) || (numsSize == 0)) {
        return 0;
    }

    int idx = 0;
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[idx++] = nums[i];
        }
    }

    return idx;
}

void rotate(int* nums, int numsSize, int k)
{
    if ((nums == NULL) || (numsSize == 0)) {
        return;
    }

    int rotate = k%numsSize;

    for (int i = numsSize - rotate; i < numsSize; i++) {
        
    }

    return;
}

int* plusOne(int* digits, int digitsSize, int* returnSize)
{
    if ((digits == NULL) || (digitsSize == 0)) {
        *returnSize = 0;
        return NULL;
    }

    int *sum = (int*)malloc(align((digitsSize + 1)*(sizeof(digits[0])), ALIGNMENT));
    if (sum == NULL) {
        *returnSize = 0;        
        return NULL;
    }

    int index = 0;
    int carry = 1;

    for (int i = digitsSize - 1; i >= 0; i--) {
        sum[index++] = (digits[i] + carry)%10;
        carry = (digits[i] + carry)/10;
    }

    if (carry > 0) {
        sum[index++] = carry;
    }

    int t;
    for (int i = 0; i < index/2; i++) {
        t = sum[i];
        sum[i] = sum[index - 1 - i];
        sum[index - 1 - i] = t;
    }

    *returnSize = index;
    return sum;
}

