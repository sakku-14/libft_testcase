#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	printf("size: %zu\n", ft_strlen("1234567890"));
	printf("size: %zu\n", ft_strlen(""));
	printf("size: %zu\n", ft_strlen("\n"));
	printf("size: %zu\n", ft_strlen("abc123"));
	printf("size: %zu\n", ft_strlen("1234567890"));

	printf("-------------------\n");

	printf("size: %lu\n", strlen("1234567890"));
	printf("size: %lu\n", strlen(""));
	printf("size: %lu\n", strlen("\n"));
	printf("size: %lu\n", strlen("abc123"));
	printf("size: %lu\n", strlen("1234567890"));
	return (0);
}
