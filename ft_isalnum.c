int	ft_isalnum(char c)
{
	if (c < 48 || (c > 57 && c < 65) || (c > 90 && c < 97) || c > 122)
	{	
		return (0);
	}
	return (c);
}
