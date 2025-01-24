#include "mylib.h"

void	my_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*begin;
	t_list	*temp;

	begin = (*(lst));
	while (begin != NULL)
	{
		temp = begin->next;
		my_lstdelone(begin, del);
		begin = temp;
	}
	*lst = NULL;
}
