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

	return (0);
}
