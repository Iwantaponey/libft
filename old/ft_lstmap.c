#include <stdlib.h>
#include <string.h>

t_list	*ft_lstmap(t_list *lst, t_list * (*f) (t_list *elem))
{
	t_list *new;
	t_list *res;
	
	new = ft_lstnew(f(lst), sizeof(f(lst)));
	res = new;
	while (lst -> next != NULL)
	{
		if (!(new -> next = ft_lstnew(f(lst -> next), sizeof(f(lst -> next)))))
		{
			return (NULL);
		}
		lst = lst -> next;
		new = new -> next;
	}
	return (res);
}
