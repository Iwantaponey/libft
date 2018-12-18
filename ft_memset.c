void	*memset(void *s, int c, size_t n)
{
	int i;
	void *s2;

	s2 = s;
	i = 0;
	while (i < n)
	{
		*s = (void) c;
		s = s + 1;
		++i;
	}
	return (s2);
}
