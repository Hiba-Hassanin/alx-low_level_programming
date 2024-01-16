#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return ptr`_strchr.c`:
	```c

#include "main.h"

	char *_strchr(char *s, char c)
	{
		while (*s != '\0')
		{
			if (*s == c)
				return s;
			s++;
		}
		if (*s == c)
			return s;
		return NULL;
	}
}
