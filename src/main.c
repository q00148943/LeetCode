#include <stdio.h>

#include "list.h"
#include "lt_string.h"
#include "array.h"

int main(int argc, char *argv[])
{
    int array[] = {1};

    moveZeroes(array, sizeof(array)/sizeof(array[0]));
    
    for (int i = 0; i < (int)(sizeof(array)/sizeof(array[0])); i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
    return 0;
}

