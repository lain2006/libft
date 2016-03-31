#include <libft.h>

t_node				*add_node_end(t_dblist **list, t_node *node)
{
	if (list && *list && node)
	{
		if (!(*list)->start && !(*list)->end)
		{
			(*list)->start = node;
			(*list)->end = node;
			node->prev = NULL;
		}
		else
		{
			node->prev = (*list)->end;
			(*list)->end->next = node;
			(*list)->end = node;
		}
		node->next = NULL;
		(*list)->nb_nodes += 1;
		return ((*list)->end);
	}
	return (NULL);
}
