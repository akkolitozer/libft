#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// int main(void)
// {
// 	t_list *node = ft_lstnew(ft_strdup("cantleavewithoutit"));
// 	if (!node)
// 		return (1);
// 	printf("content : %s\n", (char *)node->content);
// 	free(node->content);
// 	free(node);
// 	return (0);
// }