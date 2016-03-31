











#include <libft.h>

void				ft_striter(char *s, void (*f)(char *))
{
	size_t			i;

	i = 0;
	if (f)
	{
		while (s && s[i])
		{
			f(&s[i]);
			i += 1;
		}
	}
}
