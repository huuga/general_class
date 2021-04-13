#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int		main()
{
	char s[] = "123456";
	printf("strlen 6 : %lu\n", ft_strlen(s));

	char *rt = ft_memset(s, 'g', 3);
	printf("memset ggg456 : %s\n", rt);



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

	printf("memmove 45 : %s\n", s);
	char da[] = "abcdefg";

	char *yoyo = ft_memccpy(mem2, da, 'e', 9);
	if (yoyo == NULL)
	{
		write (1, "yoyo is null\n", 13);
		return (1);
	}
	else 
		printf("memccpy %s\n", yoyo);
	printf("memchr defg : %s\n", (char *)ft_memchr(da, 'd', 5));
	char f1[] = "12345";
	char f2[] = "123";
	printf("memcmp 0 : %d\n", ft_memcmp(f2, f1, 0));
	printf("memcmp -52 : %d\n", ft_memcmp(f2, f1, 4));
	free(mem2);
	free(mem);

	char *slovo = "lisma";
	char *duppy = ft_strdup(slovo);
	if (duppy == NULL)
	{
		write(1, "strdup is NULL\n", 14);
		return  (1);
	}
	printf("strdup lisma : %s\n", duppy);
	free(duppy);

	char rk[] = "dfgwq";
	char rq[10];
	printf("strcpy dfgwq : %s\n", ft_strcpy(rq, rk));

	char qw[] = "lancer";
	char mv[10];
	ft_strncpy(mv, qw, 9);
	printf ("strncpy l a n c e r ^@ ^@ ^@ ^@ : ");
	for (int i = 0; i < 10; i++)
		printf("%c ", mv[i]);
	printf("\n");

	char sq[] = "abc";
	char fde[] = "kolaasf";
	printf("strcat abckolaasf : %s\n", ft_strcat(sq, fde));

	char sgt[] = "hewlett";
	char fbc[] = "packard";
	printf("strncat hewlettpack : %s\n", ft_strncat(sgt, fbc, 4));

	printf("---------------------\n");
	char fger[] = "12345678";
	char shorty[] = "";
	printf("strchr 5678 : %s\n", ft_strchr(fger, '5'));
	if ((ft_strchr(fger, 'h')) == NULL)
		printf("NULL good\n");
	else 
		printf ("NULL is bad\n");
	if (*(ft_strchr(fger, 0)) == 0)
		printf("null terminator good\n");
	else 
		printf("null terminator is bad\n");
	if (*(ft_strchr(shorty, 0)) == 0)
		printf("shorty good\n");
	else 
		printf("shorty is bad\n");
	
	printf("---------------------\n");
	char fgerd[] = "123454321";
	printf("strrchr 21 : %s\n", ft_strrchr(fgerd, '2'));
	if ((ft_strrchr(fgerd, 'h')) == NULL)
		printf("NULL good\n");
	else 
		printf ("NULL is bad\n");
	if (*(ft_strrchr(fgerd, 0)) == 0)
	 	printf("null terminator good\n");
	else 
		printf ("null terminator is bad\n");
	if (*(ft_strrchr(shorty, 0)) == 0)
	 	printf("shorty good\n");
	else 
		printf("shorty is bad\n");

	printf("---------------------\n");
	char fgasd[] = "123 124 126";
    printf("strstr 124 126 : %s\n", ft_strstr(fgasd, "124"));
	if ((ft_strstr(fgasd, "hello")) == NULL)
		printf("NULL good\n");
	else 
		printf ("NULL is bad\n");
	
	printf("---------------------\n");
	char ffe[] = "ban bar bal";
    printf("strnstr bar bal : %s\n", ft_strnstr(ffe, "bar", 7));
	if ((ft_strnstr(ffe, "bar", 6)) == NULL)
		printf("NULL good\n");
	else 
		printf("NULL is bad\n");
	if ((ft_strnstr(ffe, "bas", 16)) == NULL)
		printf("NULL is good\n");
	else 
		printf("NULL is bad\n");

	printf("---------------------\n");
	char sr1[] = "12345";
	char sr2[] = "12346";
	printf("strcmp -1 : %d\n", ft_strcmp(sr1, sr2));
	char sfr1[] = "12345";
	char sfr2[] = "1234";
	printf("strcmp 53 : %d\n", ft_strcmp(sfr1, sfr2));
	printf("strcmp 0 : %d\n", ft_strcmp(sfr1, sr1));

	printf("---------------------\n");
	printf("strncmp -1 : %d\n", ft_strncmp(sr1, sr2, 5));
	printf("strncmp 0 : %d\n", ft_strncmp(sr1, sr2, 4));

	printf("---------------------\n");
	printf("atoi 12345 : %d\n", ft_atoi(sr1));
	printf("atoi -235 : %d\n", ft_atoi("    -235dfg54"));
	printf("atoi 2 : %d\n", ft_atoi("    +2 35dfg54"));
	printf("atoi 2 : %d\n", ft_atoi(" 		  +2 35dfg54"));
	printf("atoi 0 : %d\n", ft_atoi("    +-235dfg54"));
	printf("atoi 0 : %d\n", ft_atoi(""));
	printf("atoi 0 : %d\n", ft_atoi("-"));

	printf("---------------------\n");
	printf("isalpha 0 : %d\n", ft_isalpha('3'));
	printf("isalpha 1024 : %d\n", ft_isalpha('b'));

	printf("---------------------\n");
	printf("isdigit 0 : %d\n", ft_isdigit('b'));
	printf("isdigit 2048 : %d\n", ft_isdigit('5'));

	printf("---------------------\n");
	printf("isalnum 8 : %d\n", ft_isalnum('b'));
	printf("isalnum 8 : %d\n", ft_isalnum('4'));
	printf("isalnum 0 : %d\n", ft_isalnum(' '));

	printf("---------------------\n");
	printf("isascii 1 : %d\n", ft_isascii(' '));
	printf("isascii 1 : %d\n", ft_isascii('b'));
	printf("isascii 0 : %d\n", ft_isascii(-128));
	printf("isascii 1 : %d\n", ft_isascii(0));

	printf("---------------------\n");
	printf("isprint 0 : %d\n", ft_isprint(31));
	printf("isprint 16384 : %d\n", ft_isprint(32));
	printf("isprint 16384 : %d\n", ft_isprint(126));
	printf("isprint 0 : %d\n", ft_isprint(127));

	printf("---------------------\n");
	printf("toupper F : %c\n", ft_toupper('f'));	
	printf("toupper F : %c\n", ft_toupper('F'));	
	printf("toupper 5 : %c\n", ft_toupper('5'));	
	printf("toupper M-^A : %c\n", ft_toupper(129));

	printf("---------------------\n");
	printf("tolower f : %c\n", ft_tolower('f'));	
	printf("tolower f : %c\n", ft_tolower('F'));	
	printf("tolower 5 : %c\n", ft_tolower('5'));	
	printf("tolower M-^A : %c\n", ft_tolower(129));

}