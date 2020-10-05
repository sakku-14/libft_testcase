#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	char str1[30] = "1234567890";
	printf("size: %zu str1 : %s\n", ft_strlcat(str1, "aaa", 13), str1);
	char str11[30] = "1234567890";
	printf("size: %zu str11: %s\n", strlcat(str11, "aaa", 13), str11);

	char str2[30] = "1234567890";
	printf("size: %zu str2 : %s\n", ft_strlcat(str2, "aaa", 8), str2);
	char str22[30] = "1234567890";
	printf("size: %zu str22: %s\n", strlcat(str22, "aaa", 8), str22);

	char str3[30] = "1234567890";
	printf("size: %zu str3 : %s\n", ft_strlcat(str3, "aaa", 15), str3);
	char str33[30] = "1234567890";
	printf("size: %zu str33: %s\n", strlcat(str33, "aaa", 15), str33);

	printf("***********\n");

	char str4[30] = "12345";
	printf("size: %zu str4 : %s\n", ft_strlcat(str4, "aaa", 3), str4);
	char str44[30] = "12345";
	printf("size: %zu str44: %s\n", strlcat(str44, "aaa", 3), str44);

	char str5[30] = "12345";
	printf("size: %zu str5 : %s\n", ft_strlcat(str5, "aaa", 5), str5);
	char str55[30] = "12345";
	printf("size: %zu str55: %s\n", strlcat(str55, "aaa", 5), str55);

	char str6[30] = "12345";
	printf("size: %zu str6 : %s\n", ft_strlcat(str6, "aaa", 6), str6);
	char str66[30] = "12345";
	printf("size: %zu str66: %s\n", strlcat(str66, "aaa", 6), str66);

	char str7[30] = "12345";
	printf("size: %zu str7 : %s\n", ft_strlcat(str7, "aaa", 8), str7);
	char str77[30] = "12345";
	printf("size: %zu str77: %s\n", strlcat(str77, "aaa", 8), str77);

	char str8[30] = "12345";
	printf("size: %zu str8 : %s\n", ft_strlcat(str8, "aaa", 9), str8);
	char str88[30] = "12345";
	printf("size: %zu str88: %s\n", strlcat(str88, "aaa", 9), str88);

	printf("******テストケース対策******\n");

	char str9[0xF00] = "there is no stars in the sky";
	printf("size: %zu str9 : %s\n", ft_strlcat(str9, "the cake is a lie !\0I'm hidden lol\r\n", strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4), str9);
	char str99[0xF00] = "there is no stars in the sky";
	printf("size: %zu str99: %s\n", strlcat(str99, "the cake is a lie !\0I'm hidden lol\r\n", strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4), str99);



	return (0);
}
