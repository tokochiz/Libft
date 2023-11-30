#include <stdio.h>
#include "libft.h"

int	main(void)
{

/*--- 01 ft_isalpha ----------------------------------------*/
/*--- 02 ft_isdigit ----------------------------------------*/
/*--- 03 ft_isalnum ----------------------------------------*/
/*--- 04 ft_isascii ----------------------------------------*/

	int test1 = 42;
	printf("/*----- ft_isalpha -----*/\n");
	printf("%d", ft_isalpha(test1));
	
	printf("/*----- ft_isdigit -----*/\n");
	printf("%d", ft_isdigit(test1));

	printf("/*----- ft_isalnum -----*/\n");
	printf("%d", ft_isalnum(test1));

	printf("/*----- ft_isascii -----*/\n");
 	printf("%d", ft_isascii(test1));

printf("/*----- ft_isascii -----*/\n");
	printf("%d", ft_isprint(test1));

/*--- 05 ft_strlen ----------------------------------------*/
	const char str[] = "asdfgh";
	// const char str[] = "1223アイウエオ"; // 19
	printf("/*----- ft_strlen -----*/\n");
	printf("%s\n", str);
	printf("byte : %zu\n", ft_strlen(str));


/*--- 06 ft_memset ----------------------------------------*/
	char str1[] = "1234567890";
	char str2[] = "1234567890";
	int str3[8];
	int str3elc = sizeof(str3) / sizeof(str3[0]);

	ft_memset(str1, 'a', sizeof(str1));
	ft_memset(str2 + 2, 'x', 3);
	ft_memset(str3, 0, sizeof(str3));

	printf("/*----- ft_memset -----*/\n");
	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);
	printf("str3 = ");
	for (int i = 0; i < str3elc; i++)
	{
		printf("%d", str3[i]);
	}
	printf("\n");

/*--- 07 ft_bzero ----------------------------------------*/
	char str1[] = "1234567890";
	char str2[] = "1234567890";
	int str3[8];
	int str3elc = sizeof(str3) / sizeof(str3[0]);

	ft_bzero(str1, strlen(str1));
	ft_bzero(str2 + 2, 3);
	ft_bzero(str3, sizeof(str3));

	printf("/*----- ft_bzero -----*/\n");
	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);
	printf("str3 = ");
	for (int i = 0; i < str3elc; i++)
	{
		printf("%d", str3[i]);
	}
	printf("\n");



	return (0);
}