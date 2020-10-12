#include <stdio.h>
#include "libft.h"

int main()
{
	char *str = "1234567890";
	printf("%s\n", ft_substr(str, 3, 10));
	printf("%s\n", ft_substr(str, 9, 10));
	printf("%s\n", ft_substr(str, 2, 10));
	printf("%s\n", ft_substr(str, 0, 10));
	printf("%s\n", ft_substr(str, 10, 10));

	char *str1 = "i just want this part #############";
	printf("%s\n", ft_substr(str1, 0, 22));
}
