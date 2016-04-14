/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/12 19:39:58 by sbrochar          #+#    #+#             */
/*   Updated: 2016/04/12 19:39:59 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char				*ft_strmap(char const *s, char (*f)(char))
{
	size_t			i;
	char			*ret;

	i = 0;
	ret = (char *)ft_memalloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ret && f)
	{
		while (ret && s && s[i])
		{
			ret[i] = f(s[i]);
			i += 1;
		}
		return (ret);
	}
	return (NULL);
}
