











#include <libstr.h>

char				*ft_strrchr(const char *s, int c)
{
	int				i;
	char const		*ps;

	i = ft_strlen(s);
	ps = s;
	if (!c)
		return ((char *)s + ft_strlen(s));
	while (ps && i >= 0 && ps[i] != c)
	{
		if (ps[i] == c)
			return ((char *)ps + i);
		i -= 1;
	}
	return (NULL);
}
