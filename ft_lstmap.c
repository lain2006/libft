#include <libft.h>

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list			*ptr;
	t_list			*ret;

	ret = NULL;
	if (lst && f)
	{
		ptr = lst;
		while (ptr)
		{
			f(ptr);
			ft_lstadd(&ret, ft_lstnew(ptr->content, ptr->content_size));
			ptr = ptr->next;
		}
		return (ret);
	}
	return (NULL);
}
