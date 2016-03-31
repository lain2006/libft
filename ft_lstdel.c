#include <libft.h>

void				ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list			*ptr;
	t_list			*next;

	if (alst && *alst && del)
	{
		ptr = *alst;
		while (ptr)
		{
			next = ptr->next;
			ft_lstdelone(&ptr, del);
			ptr = next;
		}
		*alst = NULL;
	}
}
