#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = -1;
	while (s[++i])
		f(i, &s[i]);
}

// int main(void)
// {
// 	char str[] = "Mayonaka no door";
// 	void indexchar(unsigned int index, char *c)
// 	{
// 		printf("Index %d: %c\n", index, *c);
// 	}
// 	ft_striteri(str, indexchar);
// 	return (0);
// }