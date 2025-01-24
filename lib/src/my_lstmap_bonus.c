#include "mylib.h"

t_list	*my_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	temp = NULL;
	while (lst)
	{
		new = my_lstnew(f(lst->content));
		if (!new)
		{
			my_lstclear(&temp, del);
			return (temp);
		}
		my_lstadd_back(&temp, new);
		lst = lst->next;
	}
	return (temp);
}
