#include <unistd.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	if (fd == 1)
		write(1, &c, 1);
	else if (fd == 2)
		write(2, &c, 1);
}

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar_fd(str[i], fd);
		++i;
	}
}

int		main(int argc, char **argv)
{
	int	fd;
	int	ret;
	char	buff[2];

	if (argc == 1)
		ft_putstr_fd("File name missing.\n", 2);
	else if (argc > 2)
		ft_putstr_fd("Too many arguments.\n", 2);
	else
	{
		fd = open(argv[1], O_RDONLY);
		while ((ret = read(fd, buff, 1)) > 0)
		{
			buff[1] = '\0';
			ft_putstr_fd(buff, 1);
		}
	}
	return (0);
}
