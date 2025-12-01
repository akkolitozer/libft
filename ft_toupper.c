#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// int	main(int ac, char **av)
// {
// 	int i = 0;
// 	if (ac == 2)
// 	{
// 		while (i < ft_strlen(av[1]))
// 			printf("%c", ft_toupper(av[1][i++]));
// 	}
// 	printf("\n");
// 	return (0);
// }