char	*strcat(char *dest, const char *src)
{
	int i;

	i = 0;
	while (dest[i])
	{
		++i;
	}
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}
