#ifndef ARRAY_H
#define ARRAY_H

#include "typedef.h"

#define ALIGNMENT sizeof(unsigned int)
#define align(d, a) (((d) + (a - 1)) & ~(a - 1))

char** summaryRanges(int* nums, int numsSize, int* returnSize);

/* #26 Remove Duplicates from Sorted Array */
int removeDuplicates(int* nums, int numsSize);

/* #27 Remove Element */
int removeElement(int* nums, int numsSize, int val);

/* #189 Rotate Array */
void rotate(int* nums, int numsSize, int k);

/* #66 Plus One */
int* plusOne(int* digits, int digitsSize, int* returnSize);

/* #118 Pascal's Triangle */
int** generate(int numRows, int** columnSizes, int* returnSize);

/* #283 Move Zeroes */
void moveZeroes(int* nums, int numsSize);

/* #88 Merge Sorted Array */
void merge(int* nums1, int m, int* nums2, int n);

/* #169 Majority Element */
int majorityElement(int* nums, int numsSize);

/* #217 Contains Duplicate */
bool containsDuplicate(int* nums, int numsSize);

/* #219 Contains Duplicate II*/
bool containsNearbyDuplicate(int* nums, int numsSize, int k);

/* #1 Two Sum*/
int* twoSum(int* nums, int numsSize, int target);
#endif /* ARRAY_H */

