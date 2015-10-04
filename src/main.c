#include <stdio.h>

#include "list.h"
#include "lt_string.h"
#include "array.h"

int main(int argc, char *argv[])
{
    int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    /* rotate(array, sizeof(array)/sizeof(array[0]), 3); */
    int num = 0;
    int *nums = plusOne(array, sizeof(array)/sizeof(array[0]), &num);
    
    for (int i = 0; i < num; i++) {
        printf("%d ", nums[i]);
    }

    printf("\n");
    return 0;
}

