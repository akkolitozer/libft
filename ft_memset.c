#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
		ptr[i++] = (unsigned char)c;
	return (b);
}

// int main(void)
// {
// 	char str[] = "No Pole";
// 	ft_memset(str + 1, '4', 5);
// 	printf("%s\n", str);
// 	return (0);
// }