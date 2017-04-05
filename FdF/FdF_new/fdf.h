/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 10:06:06 by sjones            #+#    #+#             */
/*   Updated: 2017/03/22 14:00:42 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "mlx_keys_macros.h"
# include "minilibx_macos/mlx.h"
# include "libft/libft.h"
# include <fcntl.h>
# include <math.h>
# include <stdio.h>  //delete me please when done!!!!!
// compile with minilibx_macos/libmlx.a -framework OpenGL -framework AppKit

typedef struct		s_line
{
	int				dx;
	int				dy;
	int				sx;
	int				sy;
	int				x1;
	int				x2;
	int				y1;
	int				y2;
	double			e1;
	double			e2;
}					t_line;

typedef struct		s_pix
{
	double			x;
	double			y;
	double			z;
	double			tx;
	double			ty;
	struct s_pix	*next;
}					t_pix;

typedef struct		s_super
{
	int				**map;
	int				map_x;
	int				map_y;
	double			scl;
	double			ang;
	double			sin;
	double			cos;
	void			*mlx;
	void			*win;
	char			*fds;
	int				win_x;
	int				win_y;
	t_pix			*pix;
}					t_super;

t_pix				*init_pix(int x, int y, int z);
t_super				*init_super(char *fds, int win_x, int win_y);
void				add_pix_back(t_pix *p, int x, int y, int z);
void				ft_tbldel(char **t);
void				set_pix(t_super *s);
void				read_map(t_super *s);
void				put_line(t_super *s, t_line *l);
int					validate(char *map);
int					ft_isright(char c);
int					*str2inta(char *s);
int					cnt_num(char *s);
char				*next_nbr(char *s);
int					key_hook(int key, t_super *s);
void				iso_conv(t_super *s);
void				draw_iso(t_super *s);

#endif
