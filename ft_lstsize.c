#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// int main(void)
// {
// 	t_list *head = NULL;
// 	t_list *new_node1 = ft_lstnew("un");
// 	t_list *new_node2 = ft_lstnew("deux");
// 	head = new_node1;
// 	new_node1->next = new_node2;
// 	int size = ft_lstsize(head);
// 	printf("size : %d\n", size);
// 	while (head)
// 	{
// 		t_list *temp = head;
// 		head = head->next;
// 		free(temp);
// 	}
// 	return 0;
// }