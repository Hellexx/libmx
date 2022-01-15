#include "libmx.h"

void *mx_calloc(size_t size, size_t elements)
{
    void *ptr = malloc(elements * size);
    mx_memset(ptr, 0, elements * size);
    return ptr;   
}
