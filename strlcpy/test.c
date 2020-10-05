#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	printf("size: %zu\n", ft_strlcpy("1234567890", "aaa", 3));
//	printf("size: %zu\n", ft_strlcpy("", "xxx", 3));
//	printf("size: %zu\n", ft_strlcpy("\n", "xxx", 3));
	printf("size: %zu\n", ft_strlcpy("abc123", "xxxxx", 3));
	printf("size: %zu\n", ft_strlcpy("1234567890", "a", 3));

	printf("-------------------\n");

	printf("size: %lu\n", strlcpy("1234567890", "aaa", 3));
//	printf("size: %lu\n", strlcpy("", "xxx", 3));
//	printf("size: %lu\n", strlcpy("\n", "xxx", 3));
	printf("size: %lu\n", strlcpy("abc123", "xxxxx", 3));
	printf("size: %lu\n", strlcpy("1234567890", "a", 3));
	return (0);
}
