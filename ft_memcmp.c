#include <libft.h>

int						ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char const	*ps1;
	unsigned char const	*ps2;

	i = 0;
	ps1 = (unsigned char const *)s1;
	ps2 = (unsigned char const *)s2;
	while (ps1 && ps2 && i < n)
	{
		if ((unsigned char)ps1[i] != (unsigned char)ps2[i])
			return ((unsigned char)ps1[i] - (unsigned char)ps2[i]);
		i += 1;
	}
	return ((unsigned char)ps1[i - 1] - (unsigned char)ps2[i - 1]);
}
