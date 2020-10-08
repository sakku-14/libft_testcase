#include <stdio.h>
#include "libft.h"

char add_ascii(unsigned int i, char c)
{
	return(i + c);
}

int main()
{
	char *str;

	str = ft_strmapi("hello", &add_ascii);
	printf("%s\n", str);

	str = ft_strmapi("1", &add_ascii);
	printf("%s\n", str);

	str = ft_strmapi(" ", &add_ascii);
	printf("%s\n", str);

	return (0);
}
