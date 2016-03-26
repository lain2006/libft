/*









*/

#include <libmem.h>
#include <libstr.h>

char				*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t			i;

	i = 0;
	ft_bzero(dest, n);
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i += 1;
	}
	return (dest);
}
