#include <libft.h>

char				*ft_strnew(size_t size)
{
	char			*ret;

	ret = (char *)ft_memalloc(sizeof(char) * (size + 1));
	if (ret)
		return (ret);
	return (NULL);
}
