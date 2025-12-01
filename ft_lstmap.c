#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// int main(void)
// {
// 	t_list *head = NULL;
// 	t_list *new_node1 = ft_lstnew(ft_strdup("un"));
// 	t_list *new_node2 = ft_lstnew(ft_strdup("deux"));
// 	head = new_node1;
// 	new_node1->next = new_node2;
// 	void *to_upper(void *content)
// 	{
// 		char *str = (char *)content;
// 		char *new_str = ft_strdup(str);
// 		if (!new_str)
// 			return (NULL);
// 		for (int i = 0; new_str[i]; i++)
// 			if (new_str[i] >= 'a' && new_str[i] <= 'z')
// 				new_str[i] -= 32;
// 		return (new_str);
// 	}
// 	t_list *maplist = ft_lstmap(head, to_upper, free);
// 	t_list *current = maplist;
// 	while (current)
// 	{
// 		printf("%s\n", (char *)current->content);
// 		current = current->next;
// 	}
// 	ft_lstclear(&head, free);
// 	ft_lstclear(&maplist, free);
// 	return 0;
// }