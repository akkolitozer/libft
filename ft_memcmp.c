#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	const char str1[] = "coldest winter";
// 	const char str2[] = "coldest summer";
// 	size_t n = 7;
// 	printf("%d\n", ft_memcmp(str1, str2, n));
// 	return (0);
// }