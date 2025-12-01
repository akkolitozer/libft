#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int main(void)
// {
// 	t_list *head = NULL;
// 	t_list *new_node1 = ft_lstnew("un");
// 	t_list *new_node2 = ft_lstnew("deux");
// 	head = new_node1;
// 	new_node1->next = new_node2;
// 	t_list *last = ft_lstlast(head);
// 	if (last)
// 		printf("content : %s\n", (char *)last->content);
// 	while (head)
// 	{
// 		t_list *temp = head;
// 		head = head->next;
// 		free(temp);
// 	}
// 	return 0;
// }