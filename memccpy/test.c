#include <stdio.h>
#include <string.h>
void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);

int main()
{
	char dst1[] = "1234567890";
	char src1[] = "a3aaaaaaaa";
	printf("%s\n", ft_memccpy(dst1, src1,'3', 5)); 

	char dst11[] = "1234567890";
	char src11[] = "a3aaaaaaaa";
	printf("%s\n", memccpy(dst11, src11, '3', 5)); 

	char dst2[] = "0123456789";
	char src2[] = "9876543210";
	printf("%s\n", ft_memccpy(dst2, src2, '9', 9));

	char dst22[] = "0123456789";
	char src22[] = "9876543210";
	printf("%s\n", memccpy(dst22, src22, '9', 9));

	char dst3[] = "";
	char src3[] = "";
	printf("%p\n", ft_memccpy(dst3, src3, '\0', 1));

	char dst33[] = "";
	char src33[] = "";
	printf("%p\n", memccpy(dst33, src33, '\0', 1));


	return (0);
}
