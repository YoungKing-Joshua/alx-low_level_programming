#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int main(void)
{
    int ruy[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t z = sizeof(ruy) / sizeof(ruy[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(ruy, z, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(ruy, z, 42));
    printf("Found %d at index: %d\n", 999, linear_search(ruy, z, 999));
    return (EXIT_SUCCESS);
}

