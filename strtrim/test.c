#include <stdio.h>
#include "libft.h"

int main()
{
	printf("%s\n", ft_strtrim("1234567890", "123"));
	printf("%s\n", ft_strtrim("12345678900987654321", "123"));
	printf("%s\n", ft_strtrim("12345678903211", "123"));
	printf("%s\n", ft_strtrim("", ""));
	printf("%s\n", ft_strtrim("  \t \t \n   \n\n\n\t", " \n\t"));

	return (0);
}
