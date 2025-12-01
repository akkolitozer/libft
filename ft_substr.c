#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			i;
	size_t			lens;

	if (!s)
		return (NULL);
	lens = ft_strlen(s);
	if (start >= lens)
		return (ft_strdup(""));
	if (len > lens - start)
		len = lens - start;
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = -1;
	while (++i < len)
		sub[i] = s[start + i];
	sub[i] = 0;
	return (sub);
}

// int main(void)
// {
// 	const char str[] = "Thank you for the joy";
// 	unsigned int start = 10;
// 	size_t len = 7;
// 	char *substr = ft_substr(str, start, len);
// 	if (substr)
// 	{
// 		printf("%s\n", substr);
// 		free(substr);
// 	}
// 	return (0);
// }