/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/12 18:50:11 by sbrochar          #+#    #+#             */
/*   Updated: 2016/10/05 16:45:06 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char				*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	size_t			pos;
	char const		*ptr;
	size_t			size_s2;

	i = 0;
	pos = 0;
	size_s2 = ft_strlen(s2);
	if (!size_s2)
		return ((char *)s1);
	while (s1[i])
	{
		while (s1[i] && i < n && (unsigned char)s1[i] != (unsigned char)s2[0])
			i += 1;
		if ((unsigned char)s1[i] == (unsigned char)s2[0])
		{
			ptr = s1 + i;
			pos = i + 1;
			if ((n - i) < size_s2)
				return (NULL);
			else if (!ft_strncmp(ptr, s2, size_s2))
				return ((char *)ptr);
			i = pos;
		}
	}
	return (NULL);
}
