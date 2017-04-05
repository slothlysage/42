#include "fdf.h"

int		main(int ac, char **av)
{
	t_super	*s;
//	t_pix	*t;

	if (ac != 4)
	{
		ft_putendl("usage: file, win_x, win_y");
		return (0);
	}
	s = init_super(av[1], ft_atoi(av[2]), ft_atoi(av[3]));
	mlx_key_hook(s->win, key_hook, s);
	mlx_loop(s->mlx);
/*	t = s->pix;
	while (t->next)  										//for testing
	{
		printf("x:%d y:%d z:%d\n", t->x, t->y, t->z);
		t = t->next;
	}
*/	return (0);
}
