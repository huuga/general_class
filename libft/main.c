#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	char s[] = "123456";
	printf("%lu\n", ft_strlen(s));

	char *rt = ft_memset(s, 'g', 3);
	printf("%s\n", rt);



	char *mem;


	mem = malloc(1);

	// ft_bzero(s, 3);
	// printf("%c", s[0]);
	// printf("%c", s[1]);
	// printf("%c", s[2]);
	// printf("%c", s[3]);
	// printf("%c", s[4]);
	// printf("%c\n", s[5]);

	char *yo = ft_memcpy(mem, s, 0);

	printf("look here %s\n", yo);
	free(mem);

}