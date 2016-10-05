/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase_fd.c                                 :+:      :+:    :+:   */
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
#include <stdio.h>
void				ft_putnbrbase_fd(int n, unsigned int base, int fd)
{
	int reste = 0;
	int unite = 0;
	(void)base;
	(void)fd;
	reste = n;
	unite = n % 10;
#if 0
	int				len;
	long int		pow;
	long int		n_abs;
	char			charset[] = "0123456789abcdefghijklmnopqrstuvwxyz";

//(void)base;
(void)charset;

	printf("number to print: %d\n", n);
	n_abs = ft_abs(n);
	len = findlen(n_abs);
	pow = ft_pow(10, len - 1);
	if (n < 0)
		ft_putchar_fd('-', fd);
	while (n_abs > 0)
	{
	//	printf("n_abs / pow : %ld / %ld = %ld (%c)\n", n_abs, pow, (n_abs/pow), charset[(n_abs/pow) % base]);
			
		ft_putchar_fd((n_abs / pow) + '0', fd);
		n_abs %= pow;
		pow /= 10;
	}
#endif
}
