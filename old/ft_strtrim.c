#include <stdlib.h>
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

char	*ft_strtrim(char const *str)
{
	int i;
	char *res;

	i = 0;
	if (res = malloc(sizeof(char) * (ft_strlen(str) + 1)))
	{
		while (str[i])
		{
			if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
			{
				res[i] = str[i];
			}
			++i;
		}
		res[i] = '\0';
		return (res);
	}
	return (NULL);
}
