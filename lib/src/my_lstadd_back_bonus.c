#include "mylib.h"

void	my_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst != NULL)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			temp = my_lstlast(*(lst));
			temp->next = new;
		}
	}
}
