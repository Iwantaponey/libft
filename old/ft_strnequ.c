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


int	ft_strequ(char const *s1, char const *s2, size_t n)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && i < n)
	{
		++i;
	}
	if (!(s1[i]) || !(s2[i]) || i == n)
	{
		return (1);
	}
	return (0);

}
