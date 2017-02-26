#include <libft.h>

char				**ft_tabdup(const char **tab);
{
	char			**ret;
	size_t			nb_elem;
	size_t			i;

	ret = NULL;
	nb_elem = 0;
	i = 0;
	if (tab)
	{
		while (tab[nb_elem])
			nb_elem++;
		ret = (char **)ft_memalloc(sizeof(char *) * (nb_elem + 1));
		while (i < nb_elem)
		{
			ret[i] = ft_strdup(tab[i]);
			i++;
		}
		ret[i] = NULL;
	}
	return (ret)
}
