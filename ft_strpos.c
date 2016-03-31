#include <libft.h>

int					ft_strpos(char *s, char c)
{
	size_t			i;

	i = 0;
	if (s)
	{
		while (s && s[i])
		{
			if ((unsigned char)s[i] == (unsigned char)c)
				return (i);
			i += 1;
		}
	}
	return (-1);
}
