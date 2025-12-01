#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*sc;
	size_t	i;
	size_t	j;
	size_t	totalen;

	if (!s1 || !s2)
		return (NULL);
	totalen = ft_strlen(s1) + ft_strlen(s2);
	sc = malloc((totalen + 1) * sizeof(char));
	if (!sc)
		return (NULL);
	i = -1;
	while (s1[++i])
		sc[i] = s1[i];
	j = -1;
	while (s2[++j])
		sc[i + j] = s2[j];
	sc[i + j] = 0;
	return (sc);
}

// int main(void)
// {
// 	const char str1[] = "You're obsessed just let it go";
// 	const char str2[] = "You're dead to me";
// 	char *joined = ft_strjoin(str1, str2);
// 	if (joined)
// 	{
// 		printf("%s\n", joined);
// 		free(joined);
// 	}
// 	return (0);
// }