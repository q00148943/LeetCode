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

int** generate(int numRows, int** columnSizes, int* returnSize)
{
    if (numRows <= 0) {
        return NULL;
    }

    return NULL;
}

void moveZeroes(int* nums, int numsSize)
{
    if (nums == NULL) {
        return;
    }

    int index = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[index++] = nums[i];
        }
    }

    for (; index < numsSize; index++) {
        nums[index] = 0;
    }

    return;
}

void merge(int* nums1, int m, int* nums2, int n)
{
    if ((nums1 == NULL) || (nums2 == NULL)) {
        return;
    }


    int index1 = 0;
    int index2 = 0;

    int merged = 1;    
    while ((merged == 1) && ((index2) < n)) {
        merged = 0;
        for (int i = index1; i < m + index2; i++) {
            /* right here */
            if (nums1[i] > nums2[index2]) {
                for (int j = m + index2; j > i; j--) {
                    nums1[j] = nums1[j - 1];
                }
                
                nums1[i] = nums2[index2++];
                index1 = i + 1;
                merged = 1;
                break;
            }
        }
    }

    for (int i = index2; i < n; i++) {
        nums1[m + i] = nums2[i];
    }

    return;
}

int majorityElement(int* nums, int numsSize)
{
    int temp;
    for (int i = 1; i < numsSize; ++i)
    {
        for (int j = i; j > 0; --j)
        {
            if (nums[j] < nums[j-1])
            {
                temp = nums[j];
                nums[j] = nums[j-1];
                nums[j-1] = temp;
            }
            else
            {
                break;
            }
        }
    }

    return nums[numsSize/2];
}

