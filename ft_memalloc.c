/*
**
**
**
**
**
**
**
**
**
*/

#include <stdlib.h>
#include <libft.h>

void				*ft_memalloc(size_t size)
{
	void			*ret;

	ret = malloc(size);
	if (ret)
	{
		ft_bzero(ret, size);
		return (ret);
	}
	return (NULL);
}
