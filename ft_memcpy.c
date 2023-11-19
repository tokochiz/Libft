/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:52:40 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/11/19 22:40:12 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char *x;
	unsigned char *y;

	x = (const unsigned char *)src;
	y = (unsigned char *)dst;

	while(n-- > 0){
		*(y++) = *(x++);
	}
	return (void *)src;
}

// int main(void)
// {
// 	char dst[20] = "abcde";
// 	char str1[] = "123";
// 	char str2[] = "abcdefghijk";
// 	char str3[] = "123 4 5";

// 	ft_memcpy(dst, str1, strlen(str1));
// 	ft_memcpy(dst, str2, 3);
// 	ft_memcpy(dst, str3, sizeof(str3));

// 	printf("/*----- ft_memcpy -----*/\n");
// 	printf("str1 = %s\n", str1);
// 	printf("str2 = %s\n", str2);
// 	printf("str3 = %s\n", str3);

// 	return (0);
// }