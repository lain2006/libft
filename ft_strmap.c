#include <libft.h>

char				*ft_strmap(char const *s, char (*f)(char))
{
	size_t			i;
	char			*ret;

	i = 0;
	ret = (char *)ft_memalloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ret && f)
	{
		while (ret && s && s[i])
		{
			ret[i] = f(s[i]);
			i += 1;
		}
		return (ret);
	}
	return (NULL);
}
