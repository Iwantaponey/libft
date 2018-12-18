int	ft_atoi(char *str)
{
	int nb;
	int neg;
	int i;

	i = 0;
	nb = 0;
	neg = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
	{
		++i;
	}
	if (str[i] == '-')
	{
		neg = 1;
	}
	if (str[i] == '+')
	{
		++i;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = (nb * 10) + str[i];
		++i;
	}
	if (neg)
	{
		return (nb * (-1));
	}
	return (nb);
}
