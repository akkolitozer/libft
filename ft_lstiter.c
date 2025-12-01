#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// int main(void)
// {
// 	t_list *head = NULL;
// 	t_list *new_node1 = ft_lstnew(ft_strdup("un"));
// 	t_list *new_node2 = ft_lstnew(ft_strdup("deux"));
// 	head = new_node1;
// 	new_node1->next = new_node2;
// 	void print_content(void *content)
// 	{
// 		printf("%s\n", (char *)content);
// 	}
// 	ft_lstiter(head, print_content);
// 	while (head)
// 	{
// 		t_list *temp = head;
// 		head = head->next;
// 		free(temp->content);
// 		free(temp);
// 	}
// 	return 0;
// }