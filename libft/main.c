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
	//char	*mem2 = malloc(1);

	// ft_bzero(s, 3);
	// printf("%c", s[0]);
	// printf("%c", s[1]);
	// printf("%c", s[2]);
	// printf("%c", s[3]);
	// printf("%c", s[4]);
	// printf("%c\n", s[5]);

	ft_memmove(s, s + 3, 2);

	printf("look here %s\n", s);

	// char *yoyo = ft_memccpy(mem2, s, 'r', 9);
	// if (yoyo == NULL)
	// {
	// 	write (1, "yoyo is null\n", 13);
	// 	return (1);
	// }
	// printf("%s\n", yoyo);
	free(mem);

}