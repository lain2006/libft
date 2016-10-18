/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/12 19:30:47 by sbrochar          #+#    #+#             */
/*   Updated: 2016/10/18 16:17:40 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void			ft_delcontent(void *mem, size_t size)
{
	ft_bzero(mem, size);
	ft_memdel(&mem);
}

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list			*newelem;
	t_list			*begin;
	t_list			*next;
	void			*del;

	del = &ft_delcontent;
	if (lst && f)
	{
		newelem = f(lst);
		if (newelem == NULL)
			return (NULL);
		begin = newelem;
		while (lst->next != NULL)
		{
			lst = lst->next;
			next = f(lst);
			if (next == NULL)
			{
				ft_lstdel(&begin, del);
				return (NULL);
			}
			newelem->next = next;
			newelem = next;
		}
		return (begin);
	}
	return (NULL);
}
