#include <stdio.h>

#include "list.h"
#include "lt_string.h"
#include "array.h"

int main(int argc, char *argv[])
{
    int nums1[] = {1};

    printf("%d", majorityElement(nums1, sizeof(nums1)/sizeof(nums1[0])));
    
    /* for (int i = 0; i < (int)(sizeof(nums1)/ sizeof(nums1[0])); i++) { */
    /*     printf("%d ", nums1[i]); */
    /* } */

    printf("\n");
    
    /* int nums3[256] = {1}; */
    /* int nums4[] = {2, 4, 5}; */

    /* merge(nums3, 1, nums4, sizeof(nums4)/sizeof(nums4[0])); */
    
    /* for (int i = 0; i < (int)(1 + sizeof(nums4)/sizeof(nums4[0])); i++) { */
    /*     printf("%d ", nums3[i]); */
    /* } */

    /* printf("\n"); */
    
    /* int nums5[256] = {3}; */
    /* int nums6[] = {2, 4, 5}; */

    /* merge(nums5, 1, nums6, sizeof(nums6)/sizeof(nums6[0])); */
    
    /* for (int i = 0; i < (int)(1 + sizeof(nums6)/sizeof(nums6[0])); i++) { */
    /*     printf("%d ", nums5[i]); */
    /* } */

    /* printf("\n"); */
    
    /* int nums7[256] = {7}; */
    /* int nums8[] = {2, 4, 5}; */

    /* merge(nums7, 1, nums8, sizeof(nums8)/sizeof(nums8[0])); */
    
    /* for (int i = 0; i < (int)(1 + sizeof(nums8)/sizeof(nums8[0])); i++) { */
    /*     printf("%d ", nums7[i]); */
    /* } */

    /* printf("\n"); */
    
    /* int nums9[256] = {1, 3, 6}; */
    /* int nums10[] = {2, 4, 5, 7}; */

    /* merge(nums9, 3, nums10, sizeof(nums10)/sizeof(nums10[0])); */
    
    /* for (int i = 0; i < (int)(3 + sizeof(nums10)/sizeof(nums10[0])); i++) { */
    /*     printf("%d ", nums9[i]); */
    /* } */

    /* printf("\n"); */
    
    /* int nums11[256] = {1}; */
    /* int nums12[] = {}; */

    /* merge(nums11, 1, nums12, sizeof(nums12)/sizeof(nums12[0])); */
    
    /* for (int i = 0; i < (int)(1 + sizeof(nums12)/sizeof(nums12[0])); i++) { */
    /*     printf("%d ", nums11[i]); */
    /* } */
    
    /* printf("\n"); */
    return 0;
}

