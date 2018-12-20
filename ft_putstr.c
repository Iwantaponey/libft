void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putstr(str[i]);
		++i;
	}
}
