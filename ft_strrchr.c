#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return ((char *)last);
}

// int main(void)
// {
// 	const char str[] = "I feel it coming";
// 	char ch = 'i';
// 	char *result = ft_strrchr(str, ch);
// 	if (result)
// 		printf("%s\n", result);
// 	else
// 		printf("pas la\n");
// 	return (0);
// }