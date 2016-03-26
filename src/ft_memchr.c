











#include <libmem.h>

void						*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	unsigned char const		*ps;

	i = 0;
	ps = (unsigned char *)s;
	while (ps && i < n)
	{
		if (ps[i] == (unsigned char)c)
			return ((void *)ps + i);
		i += 1;
	}
	return (NULL);
}
