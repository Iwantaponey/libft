char	*ft_strncpy(char *src, char *dest, size_t n)
{
	int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		++i;	
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest):
}
