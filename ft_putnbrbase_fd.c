/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:15:29 by sbrochar          #+#    #+#             */
/*   Updated: 2016/05/09 15:35:46 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*static unsigned	int	ft_nbrlen(int n, unsigned int base)
{
	unsigned int	num;
	unsigned int	d;
	unsigned int	u;
	int s;

	num = 0;
	s = n < 0 ? -1 : 1;
	d = ft_abs(n);
	u = d % base;
	while (d)
	{
		d /= base;
		u = d % base;
		num++;
	}
	if (n < 0)
		num++;
	else if (!n)
		num++;
	return (num);
}*/

//#include <stdio.h>
void	ft_putnbrbase_fd(int n, unsigned int base, int fd)
{
	static char nb[12] = { 0 };
	unsigned int	d;
	unsigned int	u;
	int s;
	static char const	charset[] = "0123456789abcdefghijklmnopqrstuvwxyz";
	char	*pnb;

	pnb = &nb[10];
	s = n < 0 ? -1 : 1;
	d = ft_abs(n);
	u = d % base;
	while (d)
	{
		*pnb-- = charset[u];
	//	printf("d = %d ; u = %d\n", d, u);
		d /= base;
		u = d % base;
	}
	if (n < 0)
		*pnb-- = '-';
	else if (!n)
		*pnb-- = '0';
//	*pnb++;
	ft_putstr_fd(pnb, fd);
}
