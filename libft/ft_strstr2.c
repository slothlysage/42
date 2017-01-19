/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 16:43:45 by sjones            #+#    #+#             */
/*   Updated: 2017/01/17 12:37:06 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr2(const char *big, const char *little)
{
	char	*b;
	char	*l;
	char	*t;

	b = (char*)big;
	l = (char*)little;
	t = NULL;
	if (b < l)
		return (t);
	if (!(l))
		return (b);
	while (*b)
	{
		if (ft_memcmp(b, l, ft_strlen(l)) == 0)
			return (b);
		b++;
	}
	return (t);
}
