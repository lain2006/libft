/*









*/

#include <libft.h>

void				*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ret;
	size_t			i;

	ret = s;
	i = 0;
	while (ret && i < n)
	{
		ret[i] = c;
		i += 1;
	}
	return (ret);
}
