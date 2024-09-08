#include "main.h"

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_putstr(av[1]);
	return (0);
}
