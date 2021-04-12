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

	char *slovo = "lisma";
	char *duppy = ft_strdup(slovo);
	if (duppy == NULL)
	{
		write(1, "strdup is NULL\n", 14);
		return  (1);
	}
	printf("strdup %s\n", duppy);
	free(duppy);

	char rk[] = "dfgwq";
	char rq[10];
	printf("strcpy %s\n", ft_strcpy(rq, rk));

	char qw[] = "lancer";
	char mv[10];
	ft_strncpy(mv, qw, 9);
	for (int i = 0; i < 10; i++)
		printf("%c ", mv[i]);
	printf("\n");

	char sq[] = "abc";
	char fde[] = "kolaasf";
	printf("strcat %s\n", ft_strcat(sq, fde));

	char sgt[] = "hewlett";
	char fbc[] = "packard";
	printf("strncat %s\n", ft_strncat(sgt, fbc, 4));

	printf("---------------------\n");
	char fger[] = "12345678";
	char shorty[] = "";
	printf("strchr %s\n", ft_strchr(fger, '5'));
	if ((ft_strchr(fger, 'h')) == NULL)
		printf("NULL good\n");
	if (*(ft_strchr(fger, 0)) == 0)
		printf("null terminator good\n");
	if (*(ft_strchr(shorty, 0)) == 0)
		printf("shorty good\n"); 
	
	printf("---------------------\n");
	char fgerd[] = "123454321";
	printf("strrchr %s\n", ft_strrchr(fgerd, '2'));
	if ((ft_strrchr(fgerd, 'h')) == NULL)
		printf("NULL good\n");
	if (*(ft_strrchr(fgerd, 0)) == 0)
	 	printf("null terminator good\n");
	if (*(ft_strrchr(shorty, 0)) == 0)
	 	printf("shorty good\n");


}