/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 14:15:54 by sjones            #+#    #+#             */
/*   Updated: 2017/02/09 13:58:58 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	t_tet	*tet;
	t_tet	*t;
	int		a;

	a = 1;
	ft_putendl("start");				//for testing
	if (!(tet = (t_tet*)malloc(sizeof(t_tet))))
		return (0);
	if (ac == 2)
	{
		ft_putnbr(ft_read(tet, open(av[1], O_RDONLY)));
		ft_putchar('\n');
		ft_putendl("did I get here?");
		trim(tet);
		t = tet;
		while(tet)
		{
			ft_putnbr(a++);
			ft_putchar('\n');
			ft_putstr(tet->p);
			tet = tet->next;
		}
		tet = t;
		ft_putstr("This is the min board len:");
		ft_putnbr(minbrdsize(tet));
		ft_putchar('\n');
		ft_putstr("The list length is:");
		ft_putnbr(ft_lstlen(tet));
		ft_putchar('\n');
		ft_putstr(ft_mkbrd(minbrdsize(tet)));
	}
	ft_putendl("end");					//more testing
	return (0);
}
