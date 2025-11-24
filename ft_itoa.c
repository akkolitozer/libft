#include "libft.h"

static size_t	count_len(long n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*sc;
	long			nb;
	size_t			len;

	nb = n;
	len = count_len(nb);
	sc = malloc((len + 1) * sizeof(char));
	if (!sc)
		return (NULL);
	sc[len] = '\0';
	if (n == 0)
		sc[0] = '0';
	if (n < 0)
	{
		sc[0] = '-';
		nb = -(long)n;
	}
	while (nb)
	{
		sc[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (sc);
}