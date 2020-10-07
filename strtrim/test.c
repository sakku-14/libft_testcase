#include <stdio.h>
#include "libft.h"

int main()
{
	printf("%s\n", ft_strtrim("1234567890", "5"));
	printf("%s\n", ft_strtrim("hello3world8this0is2a4pen5", "1234567890"));
	printf("%s\n", ft_strtrim("hello3world8this0is2a4pen5", ""));
	printf("%s\n", ft_strtrim("", "1234567890"));
	return (0);
}
