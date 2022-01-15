#include "libmx.h"

void mx_str_reverse(char *str)
{
    if (!str || !*str)
        return;

    for (register char *p1 = str, *p2 = str + mx_strlen(str) - 1; p2 > p1; ++p1, --p2)
    {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
}
