/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/12 19:40:04 by sbrochar          #+#    #+#             */
/*   Updated: 2016/08/24 17:19:09 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int			findlen(int n)
{
	int				ret;

	ret = 1;
	n *= (n < 0 ? -1 : 1);
	while (n >= 9)
	{
		n /= 10;
		ret += 1;
	}
	return (ret);
}

char				*ft_itoa(int n)
{
	char			*ret;
	int				len;
	int				i;
	int				pow;

	i = 0;
	len = findlen(n);
	pow = len * 10;
	len += n < 0 ? 1 : 0;
	ret = ft_strnew(len);
	if (ret)
	{
		if (n < 0)
			ret[len] = '-';
		while (i < len)
		{
			ret[i] = (n % pow) + '0';
			pow /= 10;
			i += 1;
		}
		ft_strrev(&ret);
		return (ret);
	}
	return (NULL);
}
