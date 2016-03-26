











#include <libmem.h>
#include <libstr.h>

#define CHECK_SPACE(x) (x == ' ' || x == '\n' || x == '\t')

static size_t		count_len(char const *s, size_t *start)
{
	size_t			i;
	size_t			end;
	size_t			size;

	i = ft_strlen(s) - 1;
	end = 0;
	size = ft_strlen(s);
	while (s && s[*start] && CHECK_SPACE(s[*start]))
		*start += 1;
	while (s && s[i] && CHECK_SPACE(s[i]))
	{
		i -= 1;
		end += 1;
	}
	if ((*start + end) >= size)
		return (0);
	else
		return (size - *start - end);
}

char				*ft_strtrim(char const *s)
{
	size_t			len;
	size_t			start;
	char			*ret;

	if (s)
	{
		start = 0;
		len = count_len(s, &start);
		ret = (char *)ft_memalloc(sizeof(char) * (len + 1));
		if (ret)
		{
			ret = ft_strncpy(ret, &s[start], len);
			return (ret);
		}
		return (NULL);
	}
	return (NULL);
}
