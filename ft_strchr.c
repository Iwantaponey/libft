#include <string.h>

char	*ft_strchr(char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
		{
			return (s+i);
		}
		++i;
	}
	return (NULL);
}
