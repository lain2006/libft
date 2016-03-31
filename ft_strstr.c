











#include <libft.h>

char				*ft_strstr(const char *s1, const char *s2)
{
	size_t			i;
	size_t			j;
	size_t			pos;
	char const		*ptr;

	i = 0;
	j = 0;
	pos = 0;
	while (s1 && s2 && s1[i])
	{
		while (s1 && s2 && s1[i] && s2[j] && s1[i] != s2[j])
			i += 1;
		ptr = &s1[i];
		pos = i + 1;
		while (s1 && s2 && s1[i] && s2[j] && s1[i] == s2[j])
		{
			i += 1;
			j += 1;
		}
		if (!s2[j])
			return ((char *)ptr);
		else
		{
			i = pos;
			j = 0;
		}
	}
	return (NULL);
}
