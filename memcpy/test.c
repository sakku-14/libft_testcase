#include <stdio.h>
#include <string.h>

void *memcpy(void *restrict dst,
         const void *restrict src, size_t n);

int main()
{
	char dest[] = "1234567890";
	char dest1[] = "1234567890";
	//char src[] = "xxx";
	//dest = memcpy(dest, src, 3);
	printf("%s\n", memcpy(dest, dest+7, 1));
	printf("%s\n", memcpy(dest, dest+7, 5));

	printf("------------------\n");

	printf("%s\n", memcpy(dest1, dest1+7, 1));
	printf("%s\n", memcpy(dest1, dest1+7, 5));
	//if (dest[3] == '\0')
		//printf("yes\n");
	//if (dest[4] == '\0')
		//printf("yes again\n");
	return 0;
}
