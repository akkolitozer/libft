#include "libft.h"

int ft_isalnum(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

// int main(int ac, char **av)
// {
// 	if (ac == 2)
// 		printf("%d\n", ft_isalnum(av[1][0]));
// }