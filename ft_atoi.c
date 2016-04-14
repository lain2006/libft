/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/12 19:36:57 by sbrochar          #+#    #+#             */
/*   Updated: 2016/04/12 19:36:59 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int			findpow(const char *nptr)
{
	int				ret;

	ret = 0;
	while (ft_isdigit(*nptr))
	{
		if (!ret)
			ret = 1;
		else
			ret *= 10;
		nptr += 1;
	}
	return (ret);
}

int					ft_atoi(const char *nptr)
{
	int				ret;
	int				pow;
	int				neg;
	char			*n;

	ret = 0;
	neg = 0;
	n = ft_strtrim(nptr);
	if (*n == '-')
	{
		neg = 1;
		n += 1;
	}
	else if (*n == '+')
		n += 1;
	pow = findpow(n);
	while (pow >= 1)
	{
		ret = ret + ((*n - '0') * pow);
		pow /= 10;
		n += 1;
	}
	if (neg)
		ret *= -1;
	return (ret);
}
