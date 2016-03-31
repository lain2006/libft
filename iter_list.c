











#include <libft.h>

t_node				*iter_list(t_dblist **list, int (*f)(t_node *))
{
	t_node			*cur;

	if (list && *list && f)
	{
		cur = (*list)->start;
		while (cur && f(cur))
			cur = cur->next;
		return (cur);
	}
	return (NULL);
}
