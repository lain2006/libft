











#include <libft.h>

void				*ft_memdup(const void *s, size_t n)
{
	void			*ret;

	ret = ft_memalloc(n);
	if (ret)
	{
		ft_memmove(ret, s, n);
		return (ret);
	}
	return (NULL);
}
