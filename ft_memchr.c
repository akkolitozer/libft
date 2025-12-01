#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	const unsigned char	*ptr;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	const char str[] = "mexico";
// 	int c = 'x';
// 	size_t n = 13;
// 	char *result = (char *)ft_memchr(str, c, n);
// 	if (result)
// 		printf("%s\n", result);
// 	else
// 		printf("pas la\n");
// 	return (0);
// }