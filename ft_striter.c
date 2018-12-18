void	ft_striter(char *str, void (*f) (char *))
{
	int i;

	i = 0;
	while (str[i])
	{
		f(str + i);
		++i;
	}
}
