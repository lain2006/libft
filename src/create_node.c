











#include <libmem.h>
#include <liblist.h>

t_node				*create_node(void *content, size_t size)
{
	t_node			*node;

	node = (t_node*)ft_memalloc(sizeof(t_node));
	if (node)
	{
		if (!size || !content)
		{
			node->content = NULL;
			node->size = 0;
		}
		else
		{
			node->content = ft_memdup(content, size);
			node->size = size;
		}
		return (node);
	}
	return (NULL);
}
