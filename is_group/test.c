#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main()
{
	printf("%d\n", isalpha('Z'));
	printf("%d\n", ft_isalpha('Z'));

	printf("%d\n", isdigit('x'));
	printf("%d\n", ft_isdigit('x'));


	printf("%d\n", ft_isascii('t'));
	printf("%d\n", isascii('t'));

	printf("%d\n", ft_isascii('\t'));
	printf("%d\n", isascii('\t'));

	return (0);
}
