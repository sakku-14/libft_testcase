#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void) {

	//数字の配列
	int i, *ptr;
	int nmemb = 4;
	if ( (ptr = (int *)ft_calloc(nmemb, sizeof(int))) == NULL ) 
	{
		fprintf(stderr, "メモリが確保できません.\n");
		return EXIT_FAILURE;
	}
	for ( i = 0; i < nmemb; i++ )
	{
		ptr[i] = i;
		printf("%d, %p\n", ptr[i], &ptr[i]);
	}
		printf("\n");
	free(ptr);


	//文字列の配列
	char *str, *buf, *p;

	if ((buf = (char *) ft_calloc(q, 100)) == NULL
		|| (str = (char *) ft_calloc(10, 16)) == NULL)
	{
		printf("failed to allocate memory...");
		return (0);
	}

	for (i = 0, p = str; i < 10; i++, p += 16)
	{
		printf("%2d:", i+1);
		fgets(buf, 100, stdin);
		strncpy(p, buf, 15);
	}
	for (i = 0, p = str; i < 10; i++, p += 16)
		printf("%s, %p\n", p, p);
	free(buf);
	free(str);
	return EXIT_SUCCESS;
}

