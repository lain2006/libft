/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/12 19:40:12 by sbrochar          #+#    #+#             */
/*   Updated: 2016/04/12 19:40:12 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
