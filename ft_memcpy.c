void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;
	void *dest2;

	dest2 = dest;
	i = 0;
	while (i < n)
	{
		*dest = *src;
		*dest = *dest + 1;
		*src = *src + 1;
		++i;
	}
	return (dest2);
}
