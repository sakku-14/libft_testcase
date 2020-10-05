#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	char *s1 = "1234567890";
	char *my;
	char *origin;

	my = ft_strdup(s1);
	origin = strdup(s1);
	printf("adress: %p, str: %s\n", s1, s1);
	printf("adress: %p, str: %s\n", my, my);
	printf("adress: %p, str: %s\n", origin, origin);

	free(my);
	free(origin);
}
