











#include <libft.h>

void				clear_list(t_dblist **list)
{
	if (list && *list)
	{
		while ((*list)->start && (*list)->end)
			remove_node(list, (*list)->start);
		ft_memdel((void **)list);
	}
}
