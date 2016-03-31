#include <libft.h>

char				*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t			i;
	char			*pdest;

	i = 0;
	pdest = dest + ft_strlen(src);
	while (src[i] && i < n)
	{
		pdest[i] = src[i];
		i += 1;
	}
	pdest[i] = '\0';
	return (dest);
}
