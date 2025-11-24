#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	char	*sc;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	sc = malloc((end - start + 1) * sizeof(char));
	if (!sc)
		return (NULL);
	ft_strlcpy(sc, s1 + start, end - start + 1);
	return (sc);
}