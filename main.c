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

/*--- 08 ft_bzero ----------------------------------------*/
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

/*--- 09 ft_memcpy ----------------------------------------*/
int	main(void)
{
	char dst[20] = "abcde";
	char str1[] = "123";
	char str2[] = "abcdefghijk";
	char str3[] = "123 4 5";

	ft_memcpy(dst, str1, strlen(str1));
	ft_memcpy(dst, str2, 3);
	ft_memcpy(dst, str3, sizeof(str3));

	printf("/*----- ft_memcpy -----*/\n");
	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);
	printf("str3 = %s\n", str3);

	return (0);
}

/*--- 13 ft_toupper ----------------------------------------*/
/*--- 14 ft_tolower ----------------------------------------*/
/*--- 15 ft_strchr ----------------------------------------*/
/*--- 16 ft_strrchr ----------------------------------------*/
/*--- 17 ft_strncmp ----------------------------------------*/

/*--- 18 ft_memchr ----------------------------------------*/
int	main(void)
{
	const char str[] = "Hello, World!";
	char target_char = 'E';

	// ft_memchr 関数を使用して文字 'W' を検索
	void *result = ft_memchr(str, target_char, sizeof(str));

	if (result != NULL)
	{
		// 文字が見つかった場合
		printf("Character '%c' found at position: %ld\n", target_char,
			(char *)result - str);
	}
	else
	{
		// 文字が見つからなかった場合
		printf("Character '%c' not found.\n", target_char);
	}

	return (0);
}

/*--- 19 ft_memcmp ----------------------------------------*/
int main(){
	size_t	size;
	int		result;

	// テスト用のデータ
	char str1[] = "Hello";
	char str2[] = "Hellp";
	size = 5;
	// memcmp 関数を使用して文字列の比較
	result = memcmp(str1, str2, size);
	// 結果の表示
	if (result == 0)
	{
		printf("The strings are equal.\n");
	}
	else if (result > 0)
	{
		printf("str1 > str2\n");
	}
	else
	{
		printf("str1 < str2\n");
	}
	return (0);
}