#include <stdio.h>
#include "libft.h"

int main()
{
	char *s1 = "12345", *s2 = "67890", *str;
	str = ft_strjoin(s1, s2);
	printf("%s\n", str);
	return (0);
}
