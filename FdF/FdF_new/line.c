#include "fdf.h"

void	put_line(t_super *s, t_line *l)
{	
	while (l->x1 != l->x2 && l->y1 != l->y2)
	{
		mlx_pixel_put(s->mlx, s->win, l->x1, l->y1, 0x00FF00FF);
		l->e2 = l->e1;
		if ((l->e2 > -(l->dx)) ? (l->e1 -= l->dy) : (l->e1 += 0))
			l->x1 += l->sx;
		if ((l->e2 < l->dy) ? (l->e1 += l->dx) : (l->e1 += 0))
			l->y1 += l->sy;
	}
}
