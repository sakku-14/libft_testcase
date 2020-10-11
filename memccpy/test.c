#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	char dst1[] = "1234567890";
	char src1[] = "a3aaaaaaaa";
	printf("my: %s\n", ft_memccpy(dst1, src1,'3', 5)); 

	char dst11[] = "1234567890";
	char src11[] = "a3aaaaaaaa";
	printf("origin: %s\n", memccpy(dst11, src11, '3', 5)); 

	char dst2[] = "0123456789";
	char src2[] = "9876543210";
	printf("my: %s\n", ft_memccpy(dst2, src2, '9', 9));

	char dst22[] = "0123456789";
	char src22[] = "9876543210";
	printf("origin: %s\n", memccpy(dst22, src22, '9', 9));

	char dst3[] = "1234567890";
	char src3[] = "aaaaaaaaaa";
	printf("my: %s\n", ft_memccpy(dst3, src3, '\0', 1));

	char dst33[] = "1234567890";
	char src33[] = "aaaaaaaaaa";
	printf("origin: %s\n", memccpy(dst33, src33, '\0', 1));

	char dst4[] = "1234567890";
	char src4[] = "";
	printf("my: %s\n", ft_memccpy(dst4, src4, '\0', 1));

	char dst44[] = "1234567890";
	char src44[] = "";
	printf("origin: %s\n", memccpy(dst44, src44, '\0', 1));

	char dst5[] = "";
	char src5[] = "aaaaaaaaaa";
	printf("my: %s\n", ft_memccpy(dst5, src5, '\0', 1));

	char dst55[] = "";
	char src55[] = "aaaaaaaaa";
	printf("origin: %s\n", memccpy(dst55, src55, '\0', 1));

	char dst6[] = "abcdefghijklmnopqrstuvwxyz";
	char src6[] = "string with\200inside !";
	printf("my: %s\n", ft_memccpy(dst6, src6, 0600, 21));

	char dst66[] = "abcdefghijklmnopqrstuvwxyz";
	char src66[] = "string with\200inside !";
	printf("origin: %s\n", memccpy(dst66, src66, 0600, 21));


	return (0);
}
