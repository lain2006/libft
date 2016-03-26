/*









*/

#include <libmem.h>

void					*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*pdest;
	const unsigned char	*psrc;

	i = 0;
	pdest = dest;
	psrc = src;
	while (psrc && i < n)
	{
		pdest[i] = (unsigned char)psrc[i];
		if ((unsigned char)psrc[i] == (unsigned char)c)
			return (dest + i + 1);
		i += 1;
	}
	return (NULL);
}
