/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/12 19:40:04 by sbrochar          #+#    #+#             */
/*   Updated: 2016/09/21 16:12:21 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int			findlen(long int n)
{
	int				ret;

	ret = 1;
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
	long int		pow;
	long int		n_abs;

	n_abs = ft_abs(n);
	len = findlen(n_abs);
	i = 0;
	pow = ft_pow(10, len - 1);
	len += n < 0 ? 1 : 0;
	ret = ft_strnew(len);
	if (ret)
	{
		if (n < 0)
		{
			ret[i] = '-';
			i++;
		}
		while (i < len)
		{
			ret[i] = (n_abs / pow) + '0';
			n_abs %= pow;
			pow /= 10;
			i++;
		}
		return (ret);
	}
	return (NULL);
}
