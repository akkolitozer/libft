#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d == s || len == 0)
		return (dst);
	if (d < s)
	{
		i = -1;
		while (++i < len)
			d[i] = s[i];
	}
	else
	{
		i = len + 1;
		while (--i > 0)
			d[i - 1] = s[i - 1];
	}
	return (dst);
}

// int main(void)
// {
// 	const char src[] = "90210";
// 	char dst[30];
// 	ft_memmove(dst, src, 26);
// 	printf("%s\n", dst);
// 	return (0);
// }