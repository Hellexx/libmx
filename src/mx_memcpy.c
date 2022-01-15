#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    register const byte *s = src;
    register byte *d = dst;

    while (n--)
        *d++ = *s++;
    return dst;
}

// static void ft_cpy(byte *restrict dst, const byte *restrict src, unsigned long n)
// {
//     while (n--)
//         *dst++ = *src++;
// }

// void *ft_memcpy(void *restrict dst, const void *restrict src, unsigned long n)
// {
//     register unsigned long *dest;
//     register const unsigned long *source;
//     size_t xlen;

//     if (!dst || !src)
//         return NULL;

//     dest = (unsigned long *)dst;
//     source = (const unsigned long *)src;
//     xlen = n / 8;
//     while (true)
//     {
//         if (!xlen)
//         {
//             ft_cpy((byte *)dest, (const byte *)source, n % 8);
//             return dst;
//         }
//         *dest++ = *source++;
//         xlen--;
//     }
//     return 0;
// }
