#include "libmx.h"

char *mx_strcpy(char *dst, const char *src)
{
    register char *save = dst;
    while ((*dst++ = *src++))
    {
    }
    return (save);
}
