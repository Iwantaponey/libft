void	ft_putnbr(int n, int fd)
{
	char *str;

	str = ft_itoa(n);
	ft_putstr_fd(str,fd);
}
