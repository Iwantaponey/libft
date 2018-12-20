#include <stdlib.h>
#include <string.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	if (new = malloc(sizeof(t_list)))
	{
		if (content == NULL)
		{
			new -> content = NULL;
			new -> content_size = 0;
			new -> next = NULL;
			return (new);
		}
		new -> content = content;
		new -> content_size = content_size;
		new -> next = NULL;
		return (new);
	}
	return (NULL);
}
