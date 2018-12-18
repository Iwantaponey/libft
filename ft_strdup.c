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

char	*ft_strdup(char *str)
{
	int i;
	int len;
	char *str2;

	len = ft_strlen(str);
	i = 0;
	if (!(str2 = malloc(sizeof(char)*(len+1))))
	{
		return (NULL);
	}
	while (str[i])
	{
		str2[i] = str[i];
		++i;
	}
	str2[i] = '\0';
	return (str2);
}
