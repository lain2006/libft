#include <libft.h>

char				*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*ret;

	ret = (char *)ft_memalloc(sizeof(char) * (len + 1));
	if (ret && s)
	{
		ret = ft_strncpy(ret, &s[start], len);
		return (ret);
	}
	return (NULL);
}
