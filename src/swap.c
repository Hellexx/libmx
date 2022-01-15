#include "libmx.h"

void swap(int *restrict xp, int *restrict yp)
{
    *xp ^= *yp;
    *yp ^= *xp;
    *xp ^= *yp;
}

void swap_safe(int *xp, int *yp)
{
    if (*xp == *yp)
        return;

    *xp ^= *yp;
    *yp ^= *xp;
    *xp ^= *yp;
}

void swapn(void *restrict v1, void *restrict v2, int size)
{
    char buffer[size];

    mx_memcpy(buffer, v1, size);
    mx_memcpy(v1, v2, size);
    mx_memcpy(v2, buffer, size);
}
