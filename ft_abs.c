/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:14:03 by sbrochar          #+#    #+#             */
/*   Updated: 2016/09/21 15:44:17 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long int			ft_abs(int n)
{
	long int		a;

	a = n;
	if (a < 0)
			a *= -1;
	return (a);
}