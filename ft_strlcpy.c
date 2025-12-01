#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = -1;
	if (size == 0)
		return (ft_strlen(src));
	while (src[++i] && i < size - 1)
		dst[i] = src[i];
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int main(void)
// {
// 	char dst[35] = "Run away";
// 	const char src[] = "Run away as fast as you can";
// 	size_t size = 30;
// 	size_t result;
// 	result = ft_strlcpy(dst, src, size);
// 	printf("%s // %d\n", dst, result);
// 	return (0);
// }