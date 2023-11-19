#include <stdio.h>
#include "libft.h"

int	main(void)
{

/*--- ft_strlen ----------------------------------------*/
	char str[] = "asdfgh";

	printf("%s\n", str);
	//printf("len : %d\n", ft_strlen(str));

/*--- ft_memset ----------------------------------------*/
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

	return (0);
}