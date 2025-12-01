#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = -1;
	while (++i < n)
		d[i] = s[i];
	return (dst);
}

// int main(void)
// {
// 	const char src[] = "conditionnesadecevoir";
// 	char dst[20];
// 	ft_memcpy(dst, src, 12);
// 	printf("%s\n", dst);
// 	return (0);
// }