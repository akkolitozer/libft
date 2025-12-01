#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		ft_putchar_fd(*s++, fd);
}

// int main(void)
// {
// 	ft_putstr_fd("Snooze", 1);
// 	return (0);
// }