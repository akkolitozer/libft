#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (NULL);
}

// int main(void)
// {
// 	const char str[] = "I feel it coming";
// 	char ch = 'i';
// 	char *result = ft_strchr(str, ch);
// 	if (result)
// 		printf("%s\n", result);
// 	else
// 		printf("pas la\n");
// 	return (0);
// }