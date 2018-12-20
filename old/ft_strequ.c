int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		++i;
	}
	return (i);
}


int	ft_strequ(char const *s1, char const *s2)
{
	int flag;
	int i;

	flag = 0;
	i = 0;
	if (ft_strlen(s1) != ft_strlen(s2))
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i])
	{
		++i;
	}
	if (!(s1[i]))
	{
		return (1);
	}
	return (0);

}
