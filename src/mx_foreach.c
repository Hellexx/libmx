#include "libmx.h"

void mx_foreach(int *arr, int size, void (*f)(int))
{
    for (size_t i = 0; i < (size_t)size; i++)
        f(arr[i]);
}
