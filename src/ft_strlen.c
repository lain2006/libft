/*









*/

#include <libstr.h>

size_t				ft_strlen(const char *s)
{
	size_t			len;

	len = 0;
	while (s && s[len])
		len += 1;
	return (len);
}
