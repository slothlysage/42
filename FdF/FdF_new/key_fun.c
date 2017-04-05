#include "fdf.h"

int		key_hook(int key, t_super *s)
{
	if (key == KEY_ESCAPE)
		exit (0);
	if (key == KEY_I)
	{
		iso_conv(s);
		draw_iso(s);
	}
	return (0);
}
