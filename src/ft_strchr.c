











#include <libstr.h>

char				*ft_strchr(const char *s, int c)
{
	char const		*ps;

	ps = s;
	if (!c)
		return ((char *)s + ft_strlen(s));
	while (ps && *ps && *ps != (unsigned char)c)
	{
		if (*ps == (unsigned char)c)
			return ((char *)ps);
		ps += 1;
	}
	return (NULL);
}
