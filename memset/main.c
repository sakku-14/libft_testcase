#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char str1[] = "0123456789";
	ft_memset(str1+2, '\n', 3);
	printf("%s\n",str1);
	char str11[] = "0123456789";
	memset(str11+2, '\n', 3);
	printf("%s\n",str11);

	char str2[] = "0123456789";
	ft_memset(str2+2, '\0', 2);
	printf("%s\n",str2);
	char str22[] = "0123456789";
	memset(str22+2, '\0', 2);
	printf("%s\n",str22);

	char str3[] = "0123456789";
	ft_memset(str3+2, 'a', 6);
	printf("%s\n",str3);
	char str33[] = "0123456789";
	memset(str33+2, 'a', 6);
	printf("%s\n",str33);

	//char str4[] = "0123456789";
	//ft_memset(str4+2, 'a', 16);
	//printf("%s\n",str4);
	//char str44[] = "0123456789";
	//memset(str44+2, 'a', 16);
	//printf("%s\n",str44);

	//char str5[] = "";
	//ft_memset(str5, 'a', 16);
	//printf("%s\n",str5);
	//char str55[] = "";
	//memset(str55, 'a', 16);
	//printf("%s\n",str55);

	char str6[] = "1234567890";
	ft_memset(str6, 'A', 11);
	printf("%s\n", str6);
	char str66[] = "1234567890";
	memset(str66, 'A', 11);
	printf("%s\n", str66);

	return (0);
}

