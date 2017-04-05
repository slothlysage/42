#include "fdf.h"

void	add_pix_back(t_pix *p, int x, int y, int z)
{
	while (p->next)
		p = p->next;
	p->next = init_pix(x, y, z);
}

void	chop_first(t_pix *p)
{
	t_pix	*t;

	t = p;
	p = p->next;
	free(t);
}

void	set_pix(t_super *s)
{
	int		i;
	int		j;

	i = 0;
	while (i < s->map_y)
	{
		j = 0;
		while (j < s->map_x)
		{
			add_pix_back(s->pix, j, i, s->map[i][j]);
			j++;
		}
		i++;
	}
	add_pix_back(s->pix, 0, 0, 0);
	chop_first(s->pix);
}
