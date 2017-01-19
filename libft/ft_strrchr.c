/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 15:50:42 by sjones            #+#    #+#             */
/*   Updated: 2017/01/10 16:36:00 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*t;

	t = (char*)s;
	while (*t)
		t++;
	if (c == '\0')
		return (t);
	while ((t - s) > 1)
	{
		if (*t == c)
			return (t);
		t--;
	}
	return (NULL);
}
