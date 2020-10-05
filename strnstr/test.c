#include <string.h>
#include "libft.h"

int main()
{
	char big1[] = "1234567890";
	char little1[] = "456";
	printf("%s\n", ft_strnstr(big1, little1, 30));
	char big11[] = "1234567890";
	char little11[] = "456";
	printf("%s\n", strnstr(big11, little11, 30));

	char big2[] = "1234567890";
	char little2[] = "456";
	printf("%s\n", ft_strnstr(big2, little2, 30));
	char big22[] = "1234567890";
	char little22[] = "456";
	printf("%s\n", strnstr(big22, little22, 30));

	char big3[] = "4124512345712456";
	char little3[] = "456";
	printf("%s\n", ft_strnstr(big3, little3, 30));
	char big33[] = "4124512345712456";
	char little33[] = "456";
	printf("%s\n", strnstr(big33, little33, 30));

	char big4[] = "1234567890";
	char little4[] = "45";
	printf("%s\n", strnstr(big4, little4, 5));
	char big44[] = "1234567890";
	char little44[] = "45";
	printf("%s\n", strnstr(big44, little44, 5));

return (0);
}
