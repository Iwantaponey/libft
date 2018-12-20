#include <string.h>
#include <stdlib.h>

char	*ft_strsub(char *str, unsigned int start, size_t len)
{
	int i;
	int j;
	char *res;

	i = 0;
	j = start;
	if (res = malloc(sizeof(char) * (len + 1)))
	{
		while (j < start + len)
		{
			res[i] = str[j]
			++i;
			++j;
		}
		res[i] = '\0';
		return (res);
	} 
	return (NULL);
}
