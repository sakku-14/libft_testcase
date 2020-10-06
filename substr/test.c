#include <stdio.h>
#include "libft.h"

int main()
{
	char *str = "1234567890";
	printf("%s\n", ft_substr(str, 0, 10));
	printf("%s\n", ft_substr(str, 5, 3));
	printf("%s\n", ft_substr(str, 5, 0));
	printf("%s\n", ft_substr(str, 5, 10));
	printf("%s\n", ft_substr(str, 15, 3));

}
