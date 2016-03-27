#include <stdio.h>

#include "list.h"
#include "lt_string.h"
#include "array.h"

int main(int argc, char *argv[])
{
    printf("index = %d", strStr(argv[1], argv[2]));
    return 0;
}

