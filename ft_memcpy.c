#include <libft.h>

void					*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*pdest;
	const unsigned char	*psrc;

	i = 0;
	pdest = dest;
	psrc = src;
	while (psrc && i < n)
	{
		pdest[i] = psrc[i];
		i += 1;
	}
	return (dest);
}
