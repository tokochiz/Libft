/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:23:40 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/11/19 22:39:26 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void ft_bzero(void *s, size_t n)
{	
	unsigned char	*ptr;
	// unsigned char	value;

	ptr = s;
	while (n-- > 0)
	{
		*ptr++ = 0;
	}
}

// int main(void)
// {
// 	char str1[] = "1234567890";
// 	char str2[] = "1234567890";
// 	int str3[8];
// 	int str3elc = sizeof(str3) / sizeof(str3[0]);

// 	ft_bzero(str1, strlen(str1));
// 	ft_bzero(str2 + 2, 3);
// 	ft_bzero(str3, sizeof(str3));

// 	printf("/*----- ft_bzero -----*/\n");
// 	printf("str1 = %s\n", str1);
// 	printf("str2 = %s\n", str2);
// 	printf("str3 = ");
// 	for (int i = 0; i < str3elc; i++)
// 	{
// 		printf("%d", str3[i]);
// 	}
// 	printf("\n");

// 	return (0);
// }
