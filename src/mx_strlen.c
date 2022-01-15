#include "libmx.h"

#define LONGPTR_MASK (sizeof(long) - 1)

int mx_strlen(const char *str)
{
	register const char *s;

	for (s = str; *s; ++s)
		;
	return (s - str);
}

