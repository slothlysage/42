#include "fdf.h"

t_pix		*init_pix(int x, int y, int z)
{
	t_pix	*p;

	if (!(p = (t_pix*)malloc(sizeof(t_pix))))
		return (NULL);
	p->x = x;
	p->y = y;
	p->z = z;
	p->tx = 0;
	p->ty = 0;
	p->next = NULL;
	return (p);
}

t_super		*init_super(char *fds, int win_x, int win_y)
{
	t_super	*s;

	if(!(s = (t_super*)malloc(sizeof(t_super))))
		return (NULL);
	s->fds = fds;
	s->map_x = 0;
	s->map_y = 0;
	s->scl = 0;
	s->ang = 0;
	s->sin = 0;
	s->cos = 0;
	read_map(s);
	s->mlx = mlx_init();
	s->win_x = win_x;
	s->win_x = win_y;
	s->win = mlx_new_window(s->mlx, s->win_x, s->win_y, "FdF");
	s->pix = init_pix(0, 0, 0);
	set_pix(s);
	return (s);
}
