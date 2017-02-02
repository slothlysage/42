#include <stdio.h>
#include "get_next_line.h"
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
int main(int argc, char **argv)
{
	int status;
	char    *line;
	int fd;

	fd = (argc == 2) ? open(argv[1], O_RDONLY): 0;
	//argc = 0;
	//argv = 0;
	//fd = open("/nfs/2016/j/jaylor/get_next_line/test16.txt", O_RDONLY);
	status = 1;
	while (status  == 1)
	{
		//  ft_putendl(line);
		// free(line);
		ft_putnbr(status = get_next_line(fd, &line));
		if(status)
		{
			ft_putstr(line);
			ft_putstr(".\n");
		}
	}
	// ft_putnbr(status);
	//get_next_line(fd,&line);
	// printf("%d",ft_strcmp(line, "abcdefgh"));
	return (0);
}
