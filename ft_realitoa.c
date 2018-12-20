#include <string.h>
#include <stdlib.h>
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
char	*ft_itoa(int n)
{
	int i;
	int n2;
	int neg;
	int len;
	char *str;

	n2 = n;
	len = 0;
	neg = 0;
	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	if (n < 0)
	{
		neg = 1;
		len = 1;
		n2 = -n;
	}
	while (n2 > 0)
	{
		++len;
		n2 = n2 / 10;
	}
	i = len - 1;
	n2 = n;
	if (str = malloc(sizeof(char) * (len + 1)))
	{
		if (neg)
		{
			str[0] = '-';
			n2 = -n;
		}
		while (n2 > 0)
		{
			str[i] = (n2 % 10) + 48;
			--i;
			n2 = n2 / 10;
		}
		str[len] = '\0';
		return (str);
	}	
	return (NULL);
}

int	main(int argc, char **argv)
{
	char *str = ft_itoa(2147483647);
		printf("%s \n",str);
	return (0);
}
