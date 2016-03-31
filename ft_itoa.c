











#include <libft.h>

static void			ft_strrev(char **s)
{
	char			*cpy;
	int				i;
	int				len;

	i = 0;
	len = ft_strlen(*s);
	cpy = ft_strdup(*s);
	while (len > 0)
	{
		*s[i] = cpy[len - 1];
		i += 1;
		len -= 1;
	}
}

static int			findlen(int n)
{
	int				ret;

	ret = 1;
	n *= n < 0 ? -1 : 1;
	while (n >= 9)
	{
		n /= 10;
		ret += 1;
	}
	return (ret);
}

char				*ft_itoa(int n)
{
	char			*ret;
	int				len;
	int				i;
	int				pow;

	i = 0;
	len = findlen(n);
	pow = len * 10;
	len += n < 0 ? 1 : 0;
	ret = ft_strnew(len);
	if (ret)
	{
		if (n < 0)
			ret[len] = '-';
		while (i < len)
		{
			ret[i] = (n % pow) + '0';
			pow /= 10;
			i += 1;
		}
		ft_strrev(&ret);
		return (ret);
	}
	return (NULL);
}
