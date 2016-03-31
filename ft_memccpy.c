#include <libft.h>

void					*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*pdest;
	const unsigned char	*psrc;

	i = 0;
	pdest = dst;
	psrc = src;
	while (psrc && i < n)
	{
		pdest[i] = (unsigned char)psrc[i];
		if ((unsigned char)psrc[i] == (unsigned char)c)
			return (dst + i + 1);
		i += 1;
	}
	return (NULL);
}
