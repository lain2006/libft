











#include <libmem.h>
#include <liblist.h>

t_dblist			*create_list(void)
{
	t_dblist		*list;

	list = (t_dblist*)ft_memalloc(sizeof(t_dblist));
	if (list)
	{
		list->start = NULL;
		list->end = NULL;
		list->nb_nodes = 0;
		return (list);
	}
	return (NULL);
}
