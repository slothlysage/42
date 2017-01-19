/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 16:47:47 by sjones            #+#    #+#             */
/*   Updated: 2017/01/11 16:51:43 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*a;

	if (!(a = (t_list)malloc(sizeof(t_list))))
		return (NULL);
	if (a)
	{
		a->content = content;
		a->content_size = content_size;
	}
	
