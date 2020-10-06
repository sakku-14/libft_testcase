#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	char *s1 = "where is my ", *s2 = "malloc ???", *str;
	str = ft_strjoin(s1, s2);
	printf("%s\n", str);

	char *s3 = "where is my malloc ???";
	if (!strcmp(str, s3))
		printf("success\n");
	else
		printf("str: %s\ns3: %s\n", str, s3);
	return (0);
}
