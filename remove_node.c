











#include <libft.h>

void				remove_node(t_dblist **list, t_node *node)
{
	if (list && *list && node)
	{
		if (node->prev)
			node->prev->next = node->next;
		if (node->next)
			node->next->prev = node->prev;
		if (node == (*list)->start)
			(*list)->start = node->next;
		if (node == (*list)->end)
			(*list)->end = node->prev;
		ft_memdel((void **)&(node->content));
		ft_memdel((void **)&node);
		(*list)->nb_nodes -= 1;
	}
}
