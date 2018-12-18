#include <syslib.h>
#include <string.h>

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

char	*ft_strmap(char const *str, char (*f) (unsigned int, char))
{
	char *res;
	int i;

	i = 0;
	if (res = malloc(ft_strlen(str) + 1))
	{
		while (str[i])
		{
			res[i] = f(i, str[i]);
			++i;
		}
		return (res);
	}
	return (NULL);
}
