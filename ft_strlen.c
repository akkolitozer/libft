#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// int main(void)
// {
// 	const char str[] = "Devil in a new dress";
// 	printf("%d\n", ft_strlen(str));
// 	return (0);
// }