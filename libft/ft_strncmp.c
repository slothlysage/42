/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 13:36:33 by sjones            #+#    #+#             */
/*   Updated: 2017/01/11 15:18:11 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;

	t1 = (unsigned char*)s1;
	t2 = (unsigned char*)s2;
	if ((*s1 == '\0') && *s2)
		return (-1);
	if ((*s2 == '\0') && *s1)
		return (1);
	while (*t1 && *t2 && (n > 0))
	{
		if (*t1 == *t2 && (n > 0))
		{
			t1++;
			t2++;
			n--;
		}
		if ((*t1 != *t2))
			return (*t1 - *t2);
	}
	if ((*t1 == '\0') && (*t2 == '\0') && (n == 0))
		return (0);
	return (0);
}
