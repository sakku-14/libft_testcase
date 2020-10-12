#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	char *str, *s1 = "where is my ", *s2 = "malloc ???";
	str = ft_strjoin(s1, s2);
	printf("%s\n", str);

	char *str2, *s3 = "aaaaa", *s4 = "bbbbb";
	str2 = ft_strjoin(s3, s4);
	printf("%s\n", str2);

	return (0);
}
