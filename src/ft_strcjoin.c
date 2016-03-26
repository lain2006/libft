











#include <libstr.h>

char				*ft_strcjoin(char const *s1, char const *s2, char c)
{
	char			*ret;
	if (s1 && s2)
	{
		ret = ft_strjoin(s1, &c);
		ret = ft_strjoin(ret, s2);
		return (ret);
	}
	return (NULL);
}
