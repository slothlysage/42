/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 16:43:45 by sjones            #+#    #+#             */
/*   Updated: 2017/01/17 14:47:17 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lil, size_t len)
{
	char	*b;
	char	*l;
	char	*t;
	size_t	n;

	b = (char*)big;
	l = (char*)lil;
	t = b;
	n = 0;
	if (!(*l))
		return (b);
	while (*b && (n++ <= (ft_strlen(lil) - len) &&\
			(ft_strlen(big) >= ft_strlen(lil))))
	{
		if (!(b = ft_strchr(b, l[0])))
			return (NULL);
		t = b++;
		while (*t++ == *l++)
		{
			if (*l == '\0')
				return (--b);
		}
		l = (char*)lil;
	}
	return (NULL);
}
