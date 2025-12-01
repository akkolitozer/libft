#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
		ptr[i++] = 0;
}

// int	main(void)
// {
// 	char	str[] = "khaopadkai";
	
// 	printf("%s\n", str);
// 	ft_bzero(str, 5);
// 	printf("%s\n", str);
// }