#include <libft.h>

int					ft_strnpos(char *s, char c, size_t n)
{
	size_t			i;

	i = 0;
	if (s)
	{
		while (s && s[i] && i < n)
		{
			if ((unsigned char)s[i] == (unsigned char)c)
				return (i);
			i += 1;
		}
	}
	return (-1);
}
