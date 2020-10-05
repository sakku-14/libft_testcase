#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

int main()
{
	printf("%d\n", ft_atoi(" -45678"));
	printf("%d\n", atoi(" -45678"));

	printf("%d\n", ft_atoi("9999999999999999"));
	printf("%d\n", atoi("9999999999999999"));

	printf("%d\n", ft_atoi("-9999999999999999999999999"));
	printf("%d\n", atoi("-9999999999999999999999999"));

	printf("%d\n", ft_atoi("9999999999999999999999999"));
	printf("%d\n", atoi("9999999999999999999999999"));

	printf("%d\n", ft_atoi("2147483648"));
	printf("%d\n", atoi("2147483648"));

	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", atoi("-2147483648"));

	return (0);
}
