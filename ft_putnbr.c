#include <unistd.h>

void	ft_putchara(char c)
{
	write(1, &c, 1); 
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchara(str[i]);
		++i;
	}
}


