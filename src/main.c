#include <stdio.h>

#include "list.h"
#include "lt_string.h"
#include "array.h"

int main(int argc, char *argv[])
{
    int num = 0;
    int array[] = {0, 1, 3};

    char **result = summaryRanges(array, sizeof(array)/sizeof(array[0]), &num);

    printf("[");
    
    for (int i = 0; i < num; i++) {
        printf("%s,", result[i]);
    }

    printf("]\n");
    return 0;
}

