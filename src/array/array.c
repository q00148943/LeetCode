#include <stdio.h>

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

    for (int i = 0; i < rotate; i++) {
        nums[i] = nums[numsSize - rotate + i];
    }


    return;
}

