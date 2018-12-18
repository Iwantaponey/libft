#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *mem;
	int i;

	i = 0;
	if (mem = malloc(size))
	{
		mem[i] = (void) 0;
		return (mem);
	}
	return (NULL);

}
