#include <string.h>
#include "libft.h"

int main()
{
	char s1[] = "1234567890";
	char s2[] = "1234567890";
	printf("%d\n", ft_memcmp(s1, s2, 10));
	char s11[] = "1234567890";
	char s22[] = "1234567890";
	printf("%d\n", memcmp(s11, s22, 10));

	char s3[] = "1234567890";
	char s4[] = "1234577890";
	printf("%d\n", ft_memcmp(s3, s4, 10));
	char s33[] = "1234567890";
	char s44[] = "1234577890";
	printf("%d\n", memcmp(s33, s44, 10));

	char s5[] = "asdfghjkl";
	char s6[] = "";
	printf("%d\n", ft_memcmp(s5, s6, 5));
	char s55[] = "asdfghjkl";
	char s66[] = "";
	printf("%d\n", memcmp(s55, s66, 5));

	char s7[] = "";
	char s8[] = "";
	printf("%d\n", ft_memcmp(s7, s8, 5));
	char s77[] = "";
	char s88[] = "";
	printf("%d\n", memcmp(s77, s88, 5));

	return (0);
}
