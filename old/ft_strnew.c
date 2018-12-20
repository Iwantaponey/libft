#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	int i;
	char *str;

	i = 0;
	if (str = malloc(sizeof(char) * size))
	{	
		while (i < size)
		{
			str[i] = '\0';
			++i;
		}
		return (str);
	}
	return (NULL);
}
