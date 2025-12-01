#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	dst_len = 0;
	while (dst[dst_len] && dst_len < size)
		dst_len++;
	i = dst_len;
	j = 0;
	while (src[j] && i + 1 < size)
		dst[i++] = src[j++];
	if (dst_len < size)
		dst[i] = '\0';
	return (dst_len + src_len);
}

// int main(void)
// {
// 	char dst[40] = "Lets have a toast ";
// 	const char src[] = "for the douchebags";
// 	size_t size = 30;
// 	size_t result;
// 	result = ft_strlcat(dst, src, size);
// 	printf("%s // %d\n", dst, ft_strlcat(dst, src, size));
// 	return (0);
// }