#include "libft.h"

static char	**ft_free(char **strs, int i)
{
	while (i >= 0)
		free(strs[i--]);
	free(strs);
	return (NULL);
}

static	int	countwords(const char *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			count++;
			while(str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_fill(const char *str, char c, int i)
{
	char	*sc;
	int			j;
	int			count;

	j = 0;
	count = 0;
	while (str[i + count] && str[i + count] != c)
		count++;
	sc = malloc(sizeof(char) * (count + 1));
	if (!sc)
		return (NULL);
	while (str[i] && str[i] != c)
		sc[j++] = str[i++];
	sc[j] = 0;
	return (sc);
}

char	**ft_split(const char *str, char c)
{
	char	**strs;
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	strs = malloc((countwords(str, c) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			if (!(strs[j++] = ft_fill(str, c, i)))
				return (ft_free(strs, j - 1));
			while(str[i] && str[i] != c)
				i++;
		}
	}
	strs[j] = 0;
	return (strs);
}

int	main(int ac, char **av)
{
	char	**strs;
	int	i;
	int	count;

	i = 0;
	strs = ft_split(av[1], av[2][0]);
	count = countwords(av[1], av[2][0]);
	if (ac == 3)
	{
		while (i < count)
			printf("%s\n", strs[i++]);
		printf("%d\n", count);
	}
}