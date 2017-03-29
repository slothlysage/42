/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trial1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 14:48:49 by sjones            #+#    #+#             */
/*   Updated: 2017/03/13 11:07:17 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "minilibx/mlx.h"
#include "mlx_keys_macros.h"

typedef struct		s_stuff
{
	void 			*mlx;
	void			*win;
	int				x;
	int				y;
}					t_stuff;

int	key_fun(int key, t_stuff *thing)
{
	if (key == KEY_A || key == KEY_LEFT)
		thing->x -= 1;
	if (key == KEY_D || key == KEY_RIGHT)
		thing->x += 1;
	if (key == KEY_W || key == KEY_UP)
		thing->y -= 1;
	if (key == KEY_S || key == KEY_DOWN)
		thing->y += 1;
	mlx_pixel_put(thing->mlx, thing->win, thing->x, thing->y, 0x00FF00FF);
	return (0);
}

int main()
{
	static t_stuff	*thing;

	if (!(thing = (t_stuff*)malloc(sizeof(t_stuff))))
	{
		printf("error: couldn't malloc t_stuff");
		return (-1);
	}
	thing->mlx = mlx_init();
	thing->win = mlx_new_window(thing->mlx, 1000, 1000, "thing");
	thing->x = 500;
	thing->y = 500;
	mlx_pixel_put(thing->mlx, thing->win, thing->x, thing->y, 0x00FF00FF);
	mlx_key_hook(thing->win, key_fun, thing);
	mlx_loop(thing->mlx);
	return(0);
}

	
