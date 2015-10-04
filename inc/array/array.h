#ifndef ARRAY_H
#define ARRAY_H

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
#endif /* ARRAY_H */

