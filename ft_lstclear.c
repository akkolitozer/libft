#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}

// int	main(void)
// {
// 	t_list *head = NULL;
// 	t_list *new_node1 = ft_lstnew(ft_strdup("un"));
// 	t_list *new_node2 = ft_lstnew(ft_strdup("deux"));
// 	head = new_node1;
// 	new_node1->next = new_node2;

// 	ft_lstclear(&head, free);

// 	if (head == NULL)
// 		printf("clear\n");
// 	else
// 		printf("pas clear\n");
// 	return 0;
// }