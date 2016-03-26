/*









*/

#include <libstr.h>

char				*ft_strcat(char *dest, const char *src)
{
	char			*pdest;

	pdest = dest + ft_strlen(dest);
	pdest = ft_strcpy(pdest, src);
	return (dest);
}
