#include <stdio.h>
#include "libft.h"

int main()
{
	char **strs = ft_split("hello world", ' ');
	while (*strs)
	{
		printf("%s\n", *strs);
		strs++;
	}

	char **strs1 = ft_split("asdfgghhjkglqwergtyguiopgzxcvbgnmg,g.g/g[g]g'", 'g');
	while (*strs1)
	{
		printf("%s\n", *strs1);
		strs1++;
	}

	char **strs2 = ft_split("      split       this for   me  !       ", ' ');
	while (*strs2)
	{
		printf("%s\n", *strs2);
		strs2++;
	}

/*
	char **strs3 = ft_split("\0\0\0\0\0", '\0');
	while (*strs3)
	{
		printf("%s\n", *strs3);
		strs3++;
	}

	char **strs3 = ft_split("\0 1234567x890123x45678\09012x34567890x", '\0');
	while (*strs3)
	{
		printf("%s\n", *strs3);
		strs3++;
	}
*/

	return (0);
}
