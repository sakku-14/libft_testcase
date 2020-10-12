#include <stdio.h>
#include "libft.h"

int main()
{
	printf("%s\n", ft_itoa(1234));
	printf("%s\n", ft_itoa(-1234));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa('c'));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa((-2147483647 -1)));
	return (0);
}
