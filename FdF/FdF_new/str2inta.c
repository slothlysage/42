#include "fdf.h"

int		cnt_num(char *s)
{
	int	c;

	c = 0;
	while (*s)
	{
		if (ft_isdigit(*s) == 1 && (*(s + 1) == ' '|| *(s + 1) == '\0'))
			c++;
		s++;
	}
	return (c);
}

char	*next_nbr(char *s)
{
	while (ft_isdigit(*s) != 1)
		s++;
	while (ft_isdigit(*s) == 1)
		s++;
	return (s);
}

int		*str2inta(char *s)
{
	int		*a;
	int		*t;
	int		c;

	c = cnt_num(s);
	if (!(a = (int*)malloc(sizeof(int) * c)))
		return (NULL);
	else
	{
		bzero(a, (c + 1));
		t = a;
	}
	while (*s)
	{
		*t = ft_atoi(s);
		s = next_nbr(s);
		t++;
	}	
	return (a);
}


/* test main
int		main()
{
	char	*s1 = "    01 -02   0000003 04678888   0x08  06 07 08  09 10  ";
	int		*a;
	int		i;

	i = 0;
	a = str2inta(s1);
	ft_putendl("test in a test:");
	ft_putnbr(ft_atoi("  03"));
	ft_putchar('\n');
	ft_putendl("This is the int array:");
	while (i <= 9)
	{
		ft_putnbr(a[i]);
		ft_putchar('\n');
		i++;
	}
}
*/
