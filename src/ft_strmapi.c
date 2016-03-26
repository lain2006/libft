











#include <libmem.h>
#include <libstr.h>

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			i;
	char			*ret;

	i = 0;
	ret = (char *)ft_memalloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ret && f)
	{
		while (ret && s && s[i])
		{
			ret[i] = f(i, s[i]);
			i += 1;
		}
		return (ret);
	}
	return (NULL);
}
