#include <string.h>

char	*ft_strrchr(char *s, int c)
{
	char *res;
	int i;

	i = 0;
	res = NULL;
	while (s[i])
	{
		if (s[i] == (char) c)
		{
			res = s + i;;
		}
		++i;
	}
	return (res);
}
