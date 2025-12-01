#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}

// int main(void)
// {
// 	t_list *head = NULL;
// 	t_list *new_node1 = ft_lstnew("un");
// 	t_list *new_node2 = ft_lstnew("deux");
// 	ft_lstadd_back(&head, new_node1);
// 	ft_lstadd_back(&head, new_node2);
// 	t_list *current = head;
// 	while (current)
// 	{
// 		printf("%s\n", (char *)current->content);
// 		current = current->next;
// 	}
// 	while (head)
// 	{
// 		t_list *temp = head;
// 		head = head->next;
// 		free(temp);
// 	}
// 	return 0;
// }