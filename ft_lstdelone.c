#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// int main(void)
// {
// 	t_list *node = ft_lstnew(ft_strdup("cascade"));
// 	if (!node)
// 		return (1);
// 	ft_lstdelone(node, free);
// 	return (0);
// }