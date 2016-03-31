#include <libft.h>

char				*ft_strdup(const char *s)
{
	char			*ret;

	ret = NULL;
	ret = (char *)ft_memalloc(sizeof(char) * (ft_strlen(s) + 1));
	ret = ft_strcpy(ret, s);
	if (!ret)
		return (NULL);
	else
		return (ret);
}
