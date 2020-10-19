#include <string.h>
#include <stdio.h>
#include "libft.h"

char *asc_strnstr(const char *s,const char *find, size_t slen)
{
	char c, sc;
	size_t len;

	if ((c = *find++) != '\0') {
		len = ft_strlen(find);
		do {
			do {
				if ((sc = *s++) == '\0' || slen-- < 1)
					return (NULL);
			} while (sc != c);
			if (len > slen)
				return (NULL);
		} while (ft_strncmp(s, find, len) != 0);
		s--;
	}
	return ((char *)s);
}

char *new_strnstr(const char *haystack,const char *needle, size_t len)
{
	if (*needle == '\0')
		return ((char *)haystack);
	if (*haystack == '\0' || len < 1)
		return (NULL);
	while (ft_strncmp(haystack, needle, ft_strlen(needle)) != 0)
	{
		while (*haystack != *needle)
		{
			if (*haystack++ == '\0' || len-- < 1)
				return (NULL);
		}
		if (ft_strlen(needle) > len)
			return (NULL);
		if (ft_strncmp(haystack, needle, ft_strlen(needle)) != 0)
			if (*haystack++ == '\0' || len-- < 1)
				return (NULL);
	}
	return ((char *)haystack);
}

/*	KO(セグフォ)後にthis_strncmp->ft_strncmpを変えた
	if (*needle == '\0')
		return ((char *)haystack);
	if (*haystack == '\0' || len < 1)
		return (NULL);
	while (ft_strncmp(haystack, needle, ft_strlen(needle)) != 0)
	{
		while (*haystack != *needle)
		{
			if (*haystack++ == '\0' || len-- < 1)
				return (NULL);
		}
		if (ft_strlen(needle) > len)
			return (NULL);
		if (ft_strncmp(haystack, needle, ft_strlen(needle)) != 0)
			if (*haystack++ == '\0' || len-- < 1)
				return (NULL);
	}
	return ((char *)haystack);
*/

int main()
{
	char h1[3] = "123";
	char n1[] = "123";
	printf("%s\n", ft_strnstr(h1, n1, 3));
	char h11[3] = "123";
	char n11[] = "123";
	printf("%s\n", strnstr(h11, n11, 3));
	char h111[3] = "123";
	char n111[] = "123";
	printf("%s\n", asc_strnstr(h111, n111, 3));
	char h1111[3] = "123";
	char n1111[] = "123";
	printf("%s\n", new_strnstr(h1111, n1111, 3));

	printf("\n");

	char h3[3] = "123";
	char n3[3] = "123";
	printf("%s\n", ft_strnstr(h3, n3, 3));
	char h33[3] = "123";
	char n33[3] = "123";
	printf("%s\n", strnstr(h33, n33, 3));
	char h333[3] = "123";
	char n333[3] = "123";
	printf("%s\n", asc_strnstr(h333, n333, 3));
	char h3333[3] = "123";
	char n3333[3] = "123";
	printf("%s\n", new_strnstr(h3333, n3333, 3));

	printf("\n");

	char h2[] = "1234567890";
	char n2[] = "90123";
	printf("%s\n", ft_strnstr(h2, n2, 30));
	char h22[] = "1234567890";
	char n22[] = "90123";
	printf("%s\n", strnstr(h22, n22, 30));
	char h222[] = "1234567890";
	char n222[] = "90123";
	printf("%s\n", asc_strnstr(h222, n222, 30));
	char h2222[] = "1234567890";
	char n2222[] = "90123";
	printf("%s\n", new_strnstr(h2222, n2222, 30));

	printf("\n");

	char big1[] = "1234567890";
	char little1[] = "456";
	printf("%s\n", ft_strnstr(big1, little1, 30));
	char big11[] = "1234567890";
	char little11[] = "456";
	printf("%s\n", strnstr(big11, little11, 30));
	char big111[] = "1234567890";
	char little111[] = "456";
	printf("%s\n", asc_strnstr(big111, little111, 30));
	char big1111[] = "1234567890";
	char little1111[] = "456";
	printf("%s\n", new_strnstr(big1111, little1111, 30));

	printf("\n");

	char big2[] = "1234567890";
	char little2[] = "456";
	printf("%s\n", ft_strnstr(big2, little2, 30));
	char big22[] = "1234567890";
	char little22[] = "456";
	printf("%s\n", strnstr(big22, little22, 30));
	char big222[] = "1234567890";
	char little222[] = "456";
	printf("%s\n", asc_strnstr(big222, little222, 30));
	char big2222[] = "1234567890";
	char little2222[] = "456";
	printf("%s\n", new_strnstr(big2222, little2222, 30));

	printf("\n");

	char big3[] = "4124512345712456";
	char little3[] = "456";
	printf("%s\n", ft_strnstr(big3, little3, 30));
	char big33[] = "4124512345712456";
	char little33[] = "456";
	printf("%s\n", strnstr(big33, little33, 30));
	char big333[] = "4124512345712456";
	char little333[] = "456";
	printf("%s\n", asc_strnstr(big333, little333, 30));
	char big3333[] = "4124512345712456";
	char little3333[] = "456";
	printf("%s\n", new_strnstr(big3333, little3333, 30));

	printf("\n");

	char big4[] = "1234567890";
	char little4[] = "45";
	printf("%s\n", strnstr(big4, little4, 5));
	char big44[] = "1234567890";
	char little44[] = "45";
	printf("%s\n", strnstr(big44, little44, 5));
	char big444[] = "1234567890";
	char little444[] = "45";
	printf("%s\n", asc_strnstr(big444, little444, 5));
	char big4444[] = "1234567890";
	char little4444[] = "45";
	printf("%s\n", new_strnstr(big4444, little4444, 5));

	printf("\n");

	return (0);
}
