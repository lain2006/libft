











#include <liblist.h>

void				swap_nodes(t_node **n1, t_node **n2)
{
	t_node			*tmp;

	tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}
