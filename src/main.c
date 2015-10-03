#include <stdio.h>

#include "list.h"
#include "lt_string.h"
#include "array.h"

int main(int argc, char *argv[])
{
    int array[] = {0, 1};
    int num = removeElement(array, sizeof(array)/sizeof(array[0]), 0);

    printf("result = %d\n", num);

    for (int i = 0; i < num; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
    return 0;
}

