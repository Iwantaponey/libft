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

char	*ft_strstr(char *haystack, const char *needle)
{
	int i;
	int j;
	int len;
	char *res;

	i = 0;
	j = 0;
	len = ft_strlen(needle);
	while (haystack[i])
	{
		while (haystack[i] != needle[j])
		{
			++i;
		}
		while (haystack[i] && needle[j] && haystack[i] == needle[j])
		{
			res = haystack + i;
			++i;
			++j;
			if (j == len)
			{
				return (res);
			}
		}
		++i;
		j = 0;
	}
	return (NULL);
}
