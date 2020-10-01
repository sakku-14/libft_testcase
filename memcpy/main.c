#include <stdio.h>
#include <string.h>

void *
     memcpy(void *restrict dst,
         const void *restrict src, size_t n);

int main(void)
{
	char str1[] = "0123456789";
	ft_memcpy(str1+2, '\n', 3);
	printf("%s\n",str1);
	char str11[] = "0123456789";
	memcpy(str11+2, '\n', 3);
	printf("%s\n",str11);

	char str2[] = "0123456789";
	ft_memcpy(str2+2, '\0', 2);
	printf("%s\n",str2);
	char str22[] = "0123456789";
	memcpy(str22+2, '\0', 2);
	printf("%s\n",str22);

	char str3[] = "0123456789";
	ft_memcpy(str3+2, 'a', 6);
	printf("%s\n",str3);
	char str33[] = "0123456789";
	memcpy(str33+2, 'a', 6);
	printf("%s\n",str33);

	char str4[] = "0123456789";
	ft_memcpy(str4+2, 'a', 16);
	printf("%s\n",str4);
	//char str44[] = "0123456789";
	//memcpy(str44+2, 'a', 16);
	//printf("%s\n",str44);

	char str5[] = "";
	ft_memcpy(str5, 'a', 16);
	printf("%s\n",str5);
	//char str55[] = "";
	//memcpy(str55, 'a', 16);
	//printf("%s\n",str55);
	return (0);
}

