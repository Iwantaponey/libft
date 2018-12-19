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

char	*ft_strjoin(char const *s1, char const *s2)
{
	int i;
	char *res;

	i = 0;
	if (res = malloc(sizeof(char)*(ft_strlen(s1)+ft_strlen(s2)+1)))
	{
		while (s1[i])
		{
			res[i] = s1[i];
			++i;
		}
		i = 0;
		while (s2[i])
		{
			res[i] = s2[i];
			++i;
		}
		res[i] = '\0';
		return (res);
	}
	return (NULL);
}
