/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:30:39 by  ctokoyod         #+#    #+#             */
/*   Updated: 2024/01/16 21:01:36 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_c;
	size_t			i;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst_c = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		*dst_c++ = *(unsigned char *)src++;
		i++;
	}
	return ((void *)dst);
}
// int	main(void)
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