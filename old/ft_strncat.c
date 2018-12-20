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

char	*ft_strncat(char *dest,const char *src, size_t n)
{
	int i, len;

	i = 0;
	len = ft_strlen(dest);
	while (i < n && src[i])
	{
		dest[len + i] = src[i];
		++i;
	}
	dest[len + i] = '\0';
	return (dest);
}
