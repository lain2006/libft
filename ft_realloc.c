#include <libft.h>

void				*ft_realloc(void *ptr, size_t size)
{
	void			*ret;

	if (!ptr)
	{
		ptr = ft_memalloc(size);
		if (ptr)
			return (ptr);
	}
	else if (!size)
		ft_memdel(&ptr);
	else
	{
		ret = ft_memalloc(size);
		if (ret)
		{
			ft_memmove(ret, ptr, size);
			ft_memdel(&ptr);
			return (ret);
		}
	}
	return (NULL);
}
