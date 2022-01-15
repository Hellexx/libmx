#include "libmx.h"
//#include <limits.h>

#define BASE 10

int mx_atoi(const char *str)
{
    int sign = 1, base = 0, i = 0;

    // if whitespaces then ignore.
    while (mx_isspace(str[i]))
    {
        i++;
    }

    // sign of number
    if (str[i] == '-' || str[i] == '+')
    {
        sign = 1 - 2 * (str[i++] == '-');
    }

    // checking for valid input
    while (mx_isdigit(str[i]))
    {
        // handling overflow test case
        if (base > INT_MAX / 10 || (base == INT_MAX / 10 && str[i] - '0' > 7))
        {
            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }
        base = 10 * base + (str[i++] - '0');
    }
    return base * sign;
}
