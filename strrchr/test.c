#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	char *s1 = "abcdefghijklmnopqrstuvwxyz";
	printf("%s<-->%s\n", ft_strrchr(s1, '\0'), strrchr(s1, '\0'));

	char *s2 = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	printf("%s<-->%s\n",ft_strrchr(s2, '\0'), strrchr(s2, '\0'));

	char *s3 = "\0";
	printf("%s(%p)<-->%s(%p)\n", ft_strrchr(s3, '\0'), ft_strrchr(s3, '\0'), strrchr(s3, '\0'), strrchr(s3, '\0'));

	char *s4 = "12d34d567d890";
	printf("%s<-->%s\n",ft_strrchr(s4, 'd'), strrchr(s4, 'd'));

/* どっちもセグフオ
	char *s5 = NULL;
	printf("%s<-->%s\n",ft_strrchr(s5, '\0'), ft_strrchr(s5, '\0'));
*/

	char *s6 = "\0";
	printf("%s<-->%s\n",ft_strrchr(s6, 'a'), strrchr(s6, 'a'));


	return (0);
}
