#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	char s[] = "123456";
	printf("%lu\n", ft_strlen(s));

	char *rt = ft_memset(s, 'g', 3);
	printf("%s\n", rt);



	char *mem;


	mem = malloc(1);
	char	*mem2 = malloc(1);

	// ft_bzero(s, 3);
	// printf("%c", s[0]);
	// printf("%c", s[1]);
	// printf("%c", s[2]);
	// printf("%c", s[3]);
	// printf("%c", s[4]);
	// printf("%c\n", s[5]);

	ft_memmove(s, s + 3, 2);

	printf("memmove %s\n", s);
	char da[] = "abcdefg";

	char *yoyo = ft_memccpy(mem2, da, 'e', 9);
	if (yoyo == NULL)
	{
		write (1, "yoyo is null\n", 13);
		return (1);
	}
	printf("memccpy %s\n", yoyo);
	printf("memchr %s\n", (char *)ft_memchr(da, 'd', 5));
	char f1[] = "12345";
	char f2[] = "123";
	printf("memcmp %d\n", ft_memcmp(f2, f1, 0));
	printf("memcmp %d\n", ft_memcmp(f2, f1, 4));
	free(mem2);
	free(mem);

}