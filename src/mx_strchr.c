#include "libmx.h"


char *mx_strchr(const char *p, int ch)
{
	for (;; ++p)
	{
		if (*p == ch)
			return ((char *)p);
		if (*p == '\0')
			return (NULL);
	}
}
