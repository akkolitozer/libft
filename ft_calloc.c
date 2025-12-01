#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = count * size;
	if (size && total_size / size != count)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}

// int main(void)
// {
// 	size_t count = 5;
// 	size_t size = sizeof(int);
// 	int *arr = (int *)ft_calloc(count, size);
// 	if (!arr)
// 		return (1);
// 	for (size_t i = 0; i < count; i++)
// 		printf("%d\n", arr[i]);
// 	free(arr);
// 	return (0);
// }