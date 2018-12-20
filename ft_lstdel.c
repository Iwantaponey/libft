#include <stdlib.h>
#include <string.h>

void	ft_lstdel(t_list **alst, void (*del) (void *, size_t))
{
	t_list *try;

	while (*alst != NULL)
	{
		try = *alst -> next;
		ft_lstdelone(alst, del);
		*alst = try;
	}
}
