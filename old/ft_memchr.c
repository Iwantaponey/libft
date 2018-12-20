#include <string.h>

void	*ft_memchr(void *s, int c, size_t n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)*s == (unsigned char) c)
		{
			return (s); 
		}
		++i;
	}
	return (NULL);
}
