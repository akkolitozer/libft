#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		i;

	dup = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// int main(void)
// {
// 	const char str[] = "veridis quo";
// 	char *dup = ft_strdup(str);
// 	if (dup)
// 	{
// 		printf("%s\n", dup);
// 		free(dup);
// 	}
// 	return (0);
// }