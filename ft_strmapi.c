#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*sc;
	unsigned int	i;
	
	i = -1;
	if (!s || !f)
		return (NULL);
	sc = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!sc)
		return (NULL);
	while (s[++i])
		sc[i] = f(i, s[i]);
	sc[i] = '\0';
	return (sc);
}