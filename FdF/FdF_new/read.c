#include "fdf.h"

void	read_map(t_super *s)
{
	char	*line;
	int		fd;
	int		i;

	fd = open(s->fds, O_RDONLY);
	while (get_next_line(fd, &line) > 0)
		s->map_y++;
	close(fd);
	if (!(s->map = (int**)malloc(sizeof(int*) * s->map_y)))
		return ;
	fd = open(s->fds, O_RDONLY);
	i = 0;
	while (get_next_line(fd, &line) > 0)
	{
		if (validate(line) != 1)
		{
			ft_putendl("bad map");
			exit(42);
		}
		s->map_x = cnt_num(line);
		s->map[i] = str2inta(line);
		i++;
	}
	close(fd);
}

int		ft_isright(char c)
{
	return (ft_isdigit(c) == 1 || c == ' ' || c == '\n') ? 1 : 0;
}

int		validate(char *map)
{
	while (*map)
	{
		if (ft_isright(*map) != 1)
			return (0);
		map++;
	}
	return (1);
}
