#include <stdio.h>
#include <strings.h>

void ft_bzero(void *s, size_t n);

int main(void)
{
	char str1[] = "0123456789";
	ft_bzero(str1+2, 3);
	printf("%s\n",str1);
	char str11[] = "0123456789";
	bzero(str11+2, 3);
	printf("%s\n",str11);

	char str2[] = "0123456789";
	ft_bzero(str2+3, 5);
	printf("%s\n",str2);
	char str22[] = "0123456789";
	bzero(str22+3, 5);
	printf("%s\n",str22);

	char str3[] = "0123456789";
	ft_bzero(str3+2, 6);
	printf("%s\n",str3);
	char str33[] = "0123456789";
	bzero(str33+2, 6);
	printf("%s\n",str33);

	char str4[] = "0123456789";
	ft_bzero(str4+2, 16);
	printf("%s\n",str4);
	//char str44[] = "0123456789";
	//bzero(str44+2, 16);
	//printf("%s\n",str44);

	char str5[] = "";
	ft_bzero(str5, 16);
	printf("%s\n",str5);
	//char str55[] = "";
	//bzero(str55, 16);
	//printf("%s\n",str55);
	return (0);
}

