











#include <libft.h>

int					ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;

	i = 0;
	if (!n)
		return (n);
	while (s1 && s2 && s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i += 1;
	}
	return (s1[n - 1] - s2[n - 1]);
}
