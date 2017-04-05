#include "fdf.h"

void	iso_conv(t_super *s)
{
	t_pix	*t;

	t = s->pix;
	s->sin = (s->ang * M_PI / 180);
	s->cos = (s->ang * M_PI / 180);
	while (t->next)
	{
		t->tx = (t->x - s->map_y / 2) * s->scl * -s->cos + (t->y - s->map_x /2) * s->scl;
		t->ty = (t->x * s->scl * sin(-0.8) + t->y * s->scl *cos(-0.8)) / 2 - t->z *4;
		t = t->next;
	}
}


