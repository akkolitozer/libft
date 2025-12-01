#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	if (!*to_find)
		return ((char *)str);
	if (!str && n == 0)
		return (NULL);
	i = 0;
	while (str[i] && i < n)
	{
		j = 0;
		while (to_find[j] && str[i + j] && (i + j) < n
			&& str[i + j] == to_find[j])
			j++;
		if (!to_find[j])
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	const char str[] = "Whether it's rain or shine";
// 	const char to_find[] = "rain";
// 	size_t n = 25;
// 	char *result = ft_strnstr(str, to_find, n);
// 	if (result)
// 		printf("%s\n", result);
// 	else
// 		printf("pas la\n");
// 	return (0);
// }