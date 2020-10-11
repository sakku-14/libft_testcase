#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	char *s1 = "1234567890";
	printf("%s<-->%s\n", ft_strchr(s1, '5'), strchr(s1, '5'));

	char *s2 = "1234567890";
	printf("%s<-->%s\n", ft_strchr(s2, '\0'), strchr(s2, '\0'));

	char *s3 = "\0";
	printf("%s<-->%s\n", ft_strchr(s3, '5'), strchr(s3, '5'));

	char *s4 = "\0";
	printf("%s<-->%s\n", ft_strchr(s4, '\0'), strchr(s4, '\0'));

	char *s5 = "1234567890";
	printf("%s<-->%s\n", ft_strchr(s5, 's'), strchr(s5, 's'));

	return (0);
}
